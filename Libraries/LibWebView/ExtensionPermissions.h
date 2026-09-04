#pragma once

#include <AK/HashMap.h>
#include <AK/String.h>
#include <AK/Vector.h>

namespace WebView {

class ExtensionPermissions {
public:
    bool grant(StringView extension_id, StringView permission);
    bool revoke(StringView extension_id, StringView permission);
    bool has(StringView extension_id, StringView permission) const;

private:
    HashMap<String, Vector<String>> m_grants;
};

}
