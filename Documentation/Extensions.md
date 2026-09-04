# Bumble Bee Web Extensions

Bumble Bee is adding a privacy-first WebExtensions-compatible architecture.

## Current MVP

The first implementation lives in `Libraries/LibWebView`:

- `ExtensionManager`: discovers and registers unpacked extensions.
- `ExtensionPermissions`: keeps an explicit permission grant model.
- `manifest.json`: requires at least `name` and `version`; optional `permissions`.

Example:

```json
{
  "manifest_version": 3,
  "name": "Hello Bumble Bee",
  "version": "1.0",
  "permissions": ["storage"],
  "content_scripts": [{
    "matches": ["https://example.com/*"],
    "js": ["content.js"]
  }]
}
```

## Security direction

Extensions must not automatically receive access to every page. Permissions are intended to be explicit and inspectable.

The next integration layer is:

1. persist installed extensions in the browser profile;
2. expose install/enable/disable controls in the browser UI;
3. send matching content scripts to WebContent during navigation;
4. add isolated extension execution contexts;
5. implement a small, permission-gated subset of `browser.*` APIs.

This deliberately does not claim Chrome/Firefox compatibility yet.
