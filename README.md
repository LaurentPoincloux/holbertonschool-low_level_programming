# Learn C Programming 🚀

![C Language](https://img.shields.io/badge/Language-C-blue?style=for-the-badge)
![License](https://img.shields.io/badge/License-MIT-green?style=for-the-badge)
![Build](https://img.shields.io/badge/Build-Passing-brightgreen?style=for-the-badge)

A **friendly guide** to understanding the C programming language — its foundations, purpose, and essentials. Perfect for beginners or anyone who wants to see **what really happens under the hood**.  

---

## 🌟 Why C Programming is Awesome

- **Compiled language** → fast, efficient, low-level execution  
- **Minimal abstraction** → control memory directly  
- **Root of modern systems** → OS, embedded software, AI frameworks  
- **Teaches real control** → understand how programs actually run

---

## 🏛 History & Inventors

- **Dennis Ritchie** – created C at Bell Labs  
- **Brian Kernighan** – co-author of *The C Programming Language*, helped popularize C  
- **Linus Torvalds** – used C to create Linux, proving its power  

> *Fun fact:* C has influenced almost every modern programming language! 😎

---

## ⚙️ Compilation Basics

### What happens when you type `gcc main.c`?

1. **Preprocessing** → handles `#include` and `#define`  
2. **Compilation** → converts source code into assembly  
3. **Assembly** → turns assembly into object code  
4. **Linking** → creates the final executable  

- **Default program name:** `a.out`  
- **Custom output:** `gcc -o myprogram main.c`

---

## 🏁 Entry Point & `main`

- **Entry point** → function where execution begins  
- **`main` function** → required in all C programs  
- **Return value of `main`** → program exit code (0 = success)

```c
int main(void)
{
    return 0; // success
}
