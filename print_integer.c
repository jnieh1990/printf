#include "main.h"
/**
 * print_integer - Print an integer.
 * @num: The integer to print.
 * Return: The number of characters printed.
 */
int print_integer(int num)
{
	int count = 0, temp, i, j, digits, divisor;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	if (num == INT_MIN)
		/* Handle INT_MIN as a special case */
	{
		count += _putchar('-');
		count += _putchar('2');
		num = 147483648;/* abs(INT_MIN) = 214748364*/
	}
	if (num < 0)
	{
		_putchar('-');
		num = -num;
		count++;
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
			divisor *= 10;
		_putchar((num / divisor) % 10 + '0');
		count++;
	}
	return (count);
}
