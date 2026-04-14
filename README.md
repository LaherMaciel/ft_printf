# ft_printf

[![42](https://img.shields.io/badge/42-Project-blue)](https://42.fr)
[![C](https://img.shields.io/badge/Language-C-green)](https://en.wikipedia.org/wiki/C_(programming_language))

> A re-implementation of the C standard `printf` function.

## Overview

`ft_printf` is a 42 School Rank 1 project. The goal is to re-implement `printf` from scratch using variadic functions, without using the original.

The implementation handles the core format specifiers and returns the total number of characters printed, matching the behavior of the standard `printf`.

## Supported format specifiers

| Specifier | Output |
|-----------|--------|
| `%c` | Single character |
| `%s` | String (`(null)` if NULL) |
| `%d` / `%i` | Signed decimal integer |
| `%u` | Unsigned decimal integer |
| `%x` | Unsigned hexadecimal (lowercase) |
| `%X` | Unsigned hexadecimal (uppercase) |
| `%p` | Pointer address (`(nil)` if NULL) |
| `%%` | Literal `%` character |

## Project structure

```
ft_printf/
├── ft_printf.c        # Main function and format dispatcher
├── ft_printf_utils.c  # Output helpers (char, string, number, pointer)
├── ft_printf.h        # Header
└── Makefile
```

## Usage

### Build

```bash
make
```

Produces `libftprintf.a`.

### Compile with your project

```bash
cc -Wall -Wextra -Werror your_file.c libftprintf.a -o your_program
```

### Example

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello, %s!\n", "world");
    ft_printf("Dec: %d | Hex: %x | Ptr: %p\n", 42, 42, &main);
    return (0);
}
```

## Make targets

| Target | Description |
|--------|-------------|
| `make` | Build the library |
| `make clean` | Remove object files |
| `make fclean` | Remove object files and library |
| `make re` | Rebuild from scratch |

## Author

**Laher Maciel**
- GitHub: [@LaherMaciel](https://github.com/LaherMaciel)
- 42 Login: lwencesl
