# ft_printf

> You will recode printf.

Rewrite the famous printf() function from Standard I/O header.

## Installation

This project requires [GNU Compiler Collection](https://gcc.gnu.org/) v7.5+ and [GNU Make](https://www.gnu.org/software/make/) v4.1+.

You need clone the repository:

```bash
$ git clone https://github.com/caio-vinicius/ft_printf
```

Inside the project, you can compile the files:

```bash
$ cd ft_printf
$ make
```

If everythings works fine, library `libftprintf.a` will be generated. That's it!

## Usage

To be able to use, you need include `ft_printf.h` header and compile against `libftprintf.a` library

```c
0 #include "ft_printf.h"
1
2 int main(void)
3 {
4     ft_printf("Hey!");
5     return (0);
6 }
```

Compile

```bash
$ gcc main.c libftprintf.a
```

Output
```
Hey!
```

You can try `c`, `s`, `p`, `d`, `i`, `u`, `x`, `X` or `%` conversions!

```c
0 #include "ft_printf.h"
1
2 int main(void)
3 {
4     ft_printf("%d and %i is very %s", 42, 42, "cool");
5     return (0);
6 }
```

Output
```
42 and 42 is very cool
```
