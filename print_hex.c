#include "main.h"

/**
 * print_hex - Print an unsigned integer in hexadecimal representation.
 * @num: The unsigned integer to print.
 * @uppercase: A flag indicating if the letters should be uppercase.
 * Return: The number of characters printed.
 */
int print_hex(unsigned int num, int uppercase)
{
	int count = 0;

	if (num == 0)
	{
		_putchar('0');
		return 1;
	}

	char hex_digits[] = "0123456789abcdef";
	if (uppercase)
		hex_digits = "0123456789ABCDEF";

	char hex_representation[100];
	int index = 0;

	while (num != 0)
	{
		hex_representation[index] = hex_digits[num % 16];
		num /= 16;
		index++;
	}

	for (int i = index - 1; i >= 0; i--)
	{
		_putchar(hex_representation[i]);
		count++;
	}

	return count;
}
