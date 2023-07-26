#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>

int _printf(const char *format, ...);
int _putchar(char c);
int handle_format(const char *format, va_list args);
int print_char(char c);
int print_string(char *str);
int print_percent(void);
int print_integer(int num);

#endif /* MAIN_H */
