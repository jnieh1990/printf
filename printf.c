#include "main.h"
#include <stdio.h>

/**
 * _printf - Fonction personnalisée qui affiche selon le format spécifié.
 * @format: Chaîne de formatage contenant les marqueurs de formatage.
 *
 * Return: Le nombre de caractères affichés (hors le caractère null).
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0, res;

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					res = print_char(args);
					break;
				case 's':
					res = print_string(args);
					break;
				case '%':
					res = _putchar('%');
					break;
				case 'd':
				case 'i':
					res = print_int(args);
					break;
				default:
					res = _putchar('%') + _putchar(*format);
					break;
			}
			count += res;
		}
		else
		{
			res = _putchar(*format);
			count += res;
		}
		format++;
	}
	va_end(args);
	return (count);
}
