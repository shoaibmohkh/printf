# printf

## Description
`printf` is a custom implementation of the standard C library function `printf`, developed as part of the **42 Network** curriculum. This project is designed to handle various format specifiers, allowing users to print formatted output to the console. It supports basic functionalities such as printing characters, strings, integers, unsigned integers, hexadecimal values, and pointers.

### Key Features:
- Supports format specifiers: `%c`, `%s`, `%d`, `%i`, `%u`, `%x`, `%X`, and `%p`.
- Handles edge cases and invalid format specifiers gracefully.
- Lightweight and efficient implementation.
- Compatible with standard C libraries.

---

## Table of Contents
- [Installation](#installation)
- [Usage](#usage)
- [Example Code](#Example_Code)
- [the format specifiers are supported](#the_format)
---

## Installation
Follow these steps to set up the `printf` project on your local machine.

### Prerequisites
- `make` utility (for building the project).

### Steps
1. Clone the repository:
   ```bash
   git clone https://github.com/shoaibmohkh/printf.git

## Usage
Here’s how to use the `printf` function in your C programs.

### Example_Code
```c
#include "ft_printf.h"

int main(void) {
    int num = 42;
    char *str = "Hello, World!";
    unsigned int hex = 255;

    ft_printf("Character: %c\n", 'A');
    ft_printf("String: %s\n", str);
    ft_printf("Integer: %d\n", num);
    ft_printf("Unsigned Integer: %u\n", num);
    ft_printf("Hexadecimal (lowercase): %x\n", hex);
    ft_printf("Hexadecimal (uppercase): %X\n", hex);
    ft_printf("Pointer: %p\n", &num);

    return 0;
}

Output ::
Character: A
String: Hello, World!
Integer: 42
Unsigned Integer: 42
Hexadecimal (lowercase): ff
Hexadecimal (uppercase): FF
Pointer: 0x7ffee4b5c9d4
```
### the_format:
- `%c` (character)
- `%s` (string)
- `%d` or `%i` (signed integer)
- `%u` (unsigned integer)
- `%x` (hexadecimal lowercase)
- `%X` (hexadecimal uppercase)
- `%p` (pointer address)
