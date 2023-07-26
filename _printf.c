#include "main.h"

/**
 * _printf - Custom printf function.
 * @format: The format string.
 * Return: The number of characters printed.
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

        if (format == NULL)
	return (-1);

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
			{
				va_end(args);
				return  (-1);
				/*
				 *  Incomplete format specifier, return error
				 */
			}
			count += handle_format(format, args);
		}
		else
		{
			_putchar(*format);
			count++;
		}

		format++;
	}

	va_end(args);
	return (count);
}
