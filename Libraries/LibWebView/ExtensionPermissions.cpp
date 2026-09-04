#include <LibWebView/ExtensionPermissions.h>

namespace WebView {

bool ExtensionPermissions::grant(StringView extension_id, StringView permission)
{
    auto& permissions = m_grants.ensure(extension_id);
    for (auto const& granted : permissions) {
        if (granted == permission)
            return true;
    }
    permissions.append(permission);
    return true;
}

bool ExtensionPermissions::revoke(StringView extension_id, StringView permission)
{
    auto it = m_grants.find(extension_id);
    if (it == m_grants.end())
        return false;
    for (size_t i = 0; i < it->value.size(); ++i) {
        if (it->value[i] == permission) {
            it->value.remove(i);
            return true;
        }
    }
    return false;
}

bool ExtensionPermissions::has(StringView extension_id, StringView permission) const
{
    auto it = m_grants.find(extension_id);
    if (it == m_grants.end())
        return false;
    for (auto const& granted : it->value) {
        if (granted == permission)
            return true;
    }
    return false;
}

}
