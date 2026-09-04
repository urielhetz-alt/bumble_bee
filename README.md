# Bumble Bee

[Bumble Bee](https://ladybird.org) is a truly independent web browser, using a novel engine based on web standards.

> [!IMPORTANT]
> Bumble Bee is in a pre-alpha state, and only suitable for use by developers
>

## 🎯 Quick Start

### **Studio - Multi-Language IDE with Live Preview**
Experience the power of Bumble Bee Studio with real-time compilation and live preview for all supported languages:

- **[🚀 Open Studio.html](Studio.html)** - Advanced coding environment with real compilers

### **Supported Languages in Studio:**
- 🟠 **HTML** - Full DOM rendering with live preview
- 🟡 **CSS** - Styled component rendering with theme preview
- 🟢 **JavaScript** - Babel compiled execution with console output
- 🔵 **TypeScript** - Full TypeScript 5.2 compilation with type checking
- 🟣 **INFRA** - Custom language interpreter with command execution

## Features

We aim to build a complete, usable browser for the modern web.

Bumble Bee uses a multi-process architecture with a main UI process, several WebContent renderer processes,
an ImageDecoder process, and a RequestServer process.

Image decoding and network connections are done out of process to be more robust against malicious content.
Each tab has its own renderer process, which is sandboxed from the rest of the system.

At the moment, many core library support components are inherited from SerenityOS:

- LibWeb: Web rendering engine
- LibJS: JavaScript engine
- LibWasm: WebAssembly implementation
- LibCrypto/LibTLS: Cryptography primitives and Transport Layer Security
- LibHTTP: HTTP/1.1 client
- LibGfx: 2D Graphics Library, Image Decoding and Rendering
- LibUnicode: Unicode and locale support
- LibMedia: Audio and video playback
- LibCore: Event loop, OS abstraction layer
- LibIPC: Inter-process communication

## 📊 Studio Features

### **Real Compiler Engines**
- ✅ TypeScript Compiler (v5.2.2) - Full type checking & transpilation
- ✅ Babel Compiler (v7.23.5) - ES2015+ JavaScript support
- ✅ HTML Validator - DOM parsing & structure validation
- ✅ CSS Parser - Rule extraction & validation
- ✅ INFRA Interpreter - Custom language execution

### **Live Preview for All Languages**
| Language | Preview | Compiler |
|----------|---------|----------|
| HTML | ✅ Real-time DOM rendering | HTML Validator |
| CSS | ✅ Styled component preview | CSS Parser |
| JavaScript | ✅ Console output with formatting | Babel |
| TypeScript | ✅ Transpiled execution preview | TypeScript 5.2 |
| INFRA | ✅ Command execution output | INFRA Interpreter |

### **Editor Features**
- 📝 Line numbers with auto-update
- 🎨 Syntax-aware output formatting
- 💾 Auto-save to browser localStorage
- 📥 Download code as files
- ✨ Code formatting & validation
- 🎯 Real-time status indicators

### **Sandstone Theme Design**
- 🏜️ Warm, natural color palette
- 👁️ Easy on the eyes for extended coding sessions
- 📱 Fully responsive interface
- ♿ High contrast text for accessibility

## How do I build and run this?

See [build instructions](Documentation/BuildInstructionsLadybird.md) for information on how to build Bumble Bee.

Bumble Bee runs on Linux, macOS, Windows (with WSL2), and many other \*Nixes.

## How do I read the documentation?

Code-related documentation can be found in the [documentation](Documentation/) folder.

## Get in touch and participate!

Join [our Discord server](https://discord.gg/nvfjVJ4Svh) to participate in issue and development discussions.

Please read [Getting involved with Bumble Bee](Documentation/GettingStartedContributing.md) if you're new to Bumble Bee and want to help.

Before opening an issue, please see the [issue policy](CONTRIBUTING.md#issue-policy) and the [detailed issue-reporting guidelines](ISSUES.md).

The project participation guidelines can be found in [`CONTRIBUTING.md`](CONTRIBUTING.md).

## License

Bumble Bee is licensed under a 2-clause BSD license.
