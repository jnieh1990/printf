#include "main.h"

/**
 * print_unsigned - Print an unsigned integer.
 * @num: The unsigned integer to print.
 * Return: The number of characters printed.
 */
int print_unsigned(unsigned int num)
{
	int i, j, count = 0, divisor, temp, digits;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	temp = num;
	digits = 0;

	while (temp != 0)
	{
		digits++;
		temp /= 10;
	}

	for (i = 0; i < digits; i++)
	{
		divisor = 1;
		for (j = 1; j < digits - i; j++)
		{
			divisor *= 10;
		}
		_putchar((num / divisor) % 10 + '0');
		count++;
	}
	return (count);
}
