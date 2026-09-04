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

## 📜 License

### **Dual License Structure**

This repository contains code under **two different licenses**:

#### **1. Original Ladybird Browser Code - BSD 2-Clause License**
- **Applies to:** Core browser engine, libraries, and inherited Ladybird code
- **Copyright:** (c) 2018-present, the Ladybird developers
- **Details:** See [LICENSE](LICENSE) file
- **License Text:** 
```
Redistribution and use in source and binary forms, with or without modification,
are permitted provided that the following conditions are met:
1. Redistributions of source code must retain the copyright notice, conditions, and disclaimer
2. Redistributions in binary form must reproduce the copyright notice, conditions, and disclaimer
THIS SOFTWARE IS PROVIDED "AS IS" WITHOUT WARRANTIES OF ANY KIND.
```

#### **2. Bumble Bee Studio & Original Contributions - GNU General Public License v3.0**
- **Applies to:** Studio.html, custom modifications, and original code
- **Copyright:** (c) 2024-present, Bumble Bee Contributors
- **Details:** See [COPYING-GPL3](COPYING-GPL3) file
- **Permissions:** Freedom to use, modify, and distribute under GPL-3.0 terms
- **Requirement:** Derivative works must also be GPL-3.0 licensed

### **License Compatibility**

| Component | License | Can Use | Can Distribute |
|-----------|---------|---------|-----------------|
| Original Ladybird Code | BSD 2-Clause | ✅ Yes | ✅ Yes (with attribution) |
| Studio.html | GPL-3.0 | ✅ Yes | ✅ Yes (must share source) |
| Bumble Bee Modifications | GPL-3.0 | ✅ Yes | ✅ Yes (must share source) |

### **How to Use Different Parts**

**For BSD 2-Clause Components (Ladybird code):**
- Use freely in commercial or non-commercial projects
- No need to release source code
- Must include original copyright notice

**For GPL-3.0 Components (Studio.html, modifications):**
- Use freely (including commercially)
- Must provide source code when distributing
- Any modifications must also be GPL-3.0
- Derivative works must include GPL license

### **File-Level License Headers**

To identify which license applies to specific files:

```
// BSD 2-Clause Licensed - Part of original Ladybird
// Copyright (c) 2018-present, the Ladybird developers

// GPL-3.0 Licensed - Bumble Bee Studio & Modifications
// Copyright (c) 2024-present, Bumble Bee Contributors
```

### **Legal Disclaimer**

- This dual-license approach is **fully legal** and widely used in open source
- Original Ladybird code retains BSD 2-Clause as per upstream
- New Bumble Bee contributions are offered under GPL-3.0
- Users can choose to use components under their applicable license
- For license-specific questions, consult [opensource.org](https://opensource.org)

### **Contributing to Bumble Bee**

By contributing to this repository, you agree that:
- Your contributions to original Bumble Bee code are licensed under GPL-3.0
- Your contributions to Ladybird-derived code follow the original BSD 2-Clause
- You have the right to grant these licenses

---

**Summary:** Bumble Bee Studio is **GPL-3.0** 🐝 while respecting the original **BSD 2-Clause** Ladybird license ⚖️
