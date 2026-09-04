#pragma once

#include <AK/HashMap.h>
#include <AK/JsonValue.h>
#include <AK/Optional.h>
#include <AK/Vector.h>
#include <LibCore/Forward.h>
#include <LibWebView/Forward.h>

namespace WebView {

struct Extension {
    String id;
    String name;
    String version;
    String root_path;
    Vector<String> permissions;
    bool enabled { true };
};

class WEBVIEW_API ExtensionManager {
public:
    static ExtensionManager& the();

    ErrorOr<void> load_extension(StringView root_path);
    bool unload_extension(StringView id);
    bool set_enabled(StringView id, bool enabled);

    Vector<Extension> const& extensions() const { return m_extensions; }
    Optional<Extension const&> extension(StringView id) const;

private:
    ErrorOr<Extension> parse_manifest(StringView root_path);
    Vector<Extension> m_extensions;
};

}
