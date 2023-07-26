#include "main.h"

/**
 * print_string - Print a string.
 * @str: The string to print.
 * Return: The number of characters printed.
 */
int print_string(char *str)
{
	int count = 0;

	if (!str)
	str = "(null)";

	while (*str)
	{
	_putchar(*str);
	count++;
	str++;
	}

	return (count);
}
