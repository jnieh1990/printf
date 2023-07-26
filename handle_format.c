#include "main.h"

/**
 * handle_format - Handle the conversion specifiers.
 * @format: The format string.
 * @args: The va_list arguments.
 * Return: The number of characters handled.
 */
int handle_format(const char *format, va_list args)
{
	int count = 0;

	switch (*format)
	{
	case 'c':
		count += print_char(va_arg(args, int));
		break;
	case 's':
		count += print_string(va_arg(args, char *));
		break;
	case '%':
		count += print_percent();
		break;
	case 'd':
	case 'i':
		count += print_integer(va_arg(args, int));
		break;
	case 'b':
		count += print_binary(va_arg(args, unsigned int));
		break;
	case 'u':
		count += print_unsigned(va_arg(args, unsigned int));
		break;
	case 'o':
		count += print_octal(va_arg(args, unsigned int));
		break;
	case 'x':
		count += print_hex(va_arg(args, unsigned int), 0);
		break;
	case 'X':
		count += print_hex(va_arg(args, unsigned int), 1);
		break;
	default:
		_putchar('%');
		_putchar(*format);
		count += 2;
	}
	return (count);
}
