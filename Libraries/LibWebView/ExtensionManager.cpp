#include <AK/JsonObject.h>
#include <AK/JsonValue.h>
#include <LibCore/File.h>
#include <LibCore/System.h>
#include <LibWebView/ExtensionManager.h>

namespace WebView {

ExtensionManager& ExtensionManager::the()
{
    static ExtensionManager manager;
    return manager;
}

ErrorOr<Extension> ExtensionManager::parse_manifest(StringView root_path)
{
    auto manifest_path = MUST(String::formatted("{}/manifest.json", root_path));
    auto file = TRY(Core::File::open(manifest_path, Core::File::OpenMode::Read));
    auto contents = TRY(file->read_until_eof());
    auto json = TRY(JsonValue::from_string(StringView { contents.bytes() }));
    if (!json.is_object())
        return Error::from_string_literal("Extension manifest must be a JSON object");

    auto const& object = json.as_object();
    auto name = object.get_string("name"sv);
    auto version = object.get_string("version"sv);
    if (!name.has_value() || !version.has_value())
        return Error::from_string_literal("Extension manifest requires name and version");

    Extension extension;
    extension.id = MUST(String::formatted("{}", root_path));
    extension.name = name.release_value();
    extension.version = version.release_value();
    extension.root_path = root_path;

    if (auto permissions = object.get_array("permissions"sv); permissions.has_value()) {
        for (auto const& permission : *permissions) {
            if (permission.is_string())
                extension.permissions.append(permission.as_string());
        }
    }

    return extension;
}

ErrorOr<void> ExtensionManager::load_extension(StringView root_path)
{
    auto extension = TRY(parse_manifest(root_path));
    for (auto const& existing : m_extensions) {
        if (existing.id == extension.id)
            return Error::from_string_literal("Extension is already loaded");
    }
    m_extensions.append(move(extension));
    return {};
}

bool ExtensionManager::unload_extension(StringView id)
{
    for (size_t i = 0; i < m_extensions.size(); ++i) {
        if (m_extensions[i].id == id) {
            m_extensions.remove(i);
            return true;
        }
    }
    return false;
}

bool ExtensionManager::set_enabled(StringView id, bool enabled)
{
    for (auto& extension : m_extensions) {
        if (extension.id == id) {
            extension.enabled = enabled;
            return true;
        }
    }
    return false;
}

Optional<Extension const&> ExtensionManager::extension(StringView id) const
{
    for (auto const& extension : m_extensions) {
        if (extension.id == id)
            return extension;
    }
    return {};
}

}
