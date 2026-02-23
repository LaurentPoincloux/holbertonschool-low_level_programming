# Learn C Programming 🚀

A concise guide to the foundations, purpose, and essential concepts of the **C programming language**. Perfect for beginners and anyone who wants to understand what really happens when code runs.

---

## Why C Programming is Awesome

- Compiled language → fast, efficient, low-level execution  
- Minimal abstraction → see what really happens under the hood  
- Root of modern systems → operating systems, embedded software, AI frameworks  
- Teaches true control over memory and performance

---

## History & Inventors

- **C** was invented in the early 1970s.  
- **Dennis Ritchie** – created C at Bell Labs.  
- **Brian Kernighan** – co-author of *The C Programming Language* book, helped popularize C.  
- **Linus Torvalds** – used C to create Linux, proving the power of the language for real systems.

---

## Basics of Compilation

### What happens when you type `gcc main.c`:

1. **Preprocessing** → handles `#include` and `#define`  
2. **Compilation** → transforms source code into assembly  
3. **Assembly** → converts assembly into object code  
4. **Linking** → combines object code with libraries to create an executable

- **Default program name**: `a.out` (unless you use `-o <name>`)

### Compiling with GCC

```bash
gcc main.c            # compile and produce a.out
gcc -o myprogram main.c # compile and produce myprogram
