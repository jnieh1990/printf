#include "main.h"

/**
 * print_octal - Print an unsigned integer in octal representation.
 * @num: The unsigned integer to print.
 * Return: The number of characters printed.
 */
int print_octal(unsigned int num)
{
	int i, index, count = 0;
	int octal_digits[100];

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	index = 0;

	while (num != 0)
	{
		octal_digits[index] = num % 8;
		num /= 8;
		index++;
	}

	for (i = index - 1; i >= 0; i--)
	{
		_putchar(octal_digits[i] + '0');
		count++;
	}

	return (count);
}
