#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>
#include <limits.h>

int _printf(const char *format, ...);
int _putchar(char c);
int handle_format(const char *format, va_list args);
int print_char(char c);
int print_string(char *str);
int print_percent(void);
int print_integer(int num);
int print_unsigned(void *num);
int print_octal(unsigned int num);
int print_hex(unsigned int num, int uppercase);
int print_binary(unsigned int num);
#endif /* MAIN_H */
