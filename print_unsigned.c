#include "main.h"

/**
 * print_unsigned - Print an unsigned integer or long unsigned integer.
 * @num: The integer to print.
 * Return: The number of characters printed.
 */
int print_unsigned(void *num)
{
	int i, j, count = 0, digits;
	unsigned long int u_num = 0;
	unsigned long int temp = u_num;

	if (num == NULL)
		return (-1);

	if (num == (void *)(long int)num) /* Check if num is a long int*/
	{
		u_num = (unsigned long int)(long int)num;
	}
	else
	{
		u_num = (unsigned int)(unsigned long int)num; /* Cast to unsigned int*/
	}

	if (u_num == 0)
	{
		_putchar('0');
		return 1;
	}

	digits = 0;

	while (temp != 0)
	{
		digits++;
		temp /= 10;
	}

	for (i = 0; i < digits; i++)
	{
		unsigned long int divisor = 1;
		for (j = 1; j < digits - i; j++)
			divisor *= 10;

		_putchar((u_num / divisor) % 10 + '0');
		count++;
	}

	return (count);
}
