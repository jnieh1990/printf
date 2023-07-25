#include "main.h"

/**
 * print_integer - Print an integer.
 * @num: The integer to print.
 * Return: The number of characters printed.
 */
int print_integer(int num)
{
int count = 0;
int temp = num;
int digits = 0;

if (num == 0)
{
_putchar('0');
return 1;
}

if (num < 0)
{
_putchar('-');
count++;
num = -num;
}

while (temp != 0)
{
digits++;
temp /= 10;
}

for (int i = 0; i < digits; i++)
{
int divisor = 1;
for (int j = 1; j < digits - i; j++)
divisor *= 10;

_putchar((num / divisor) % 10 + '0');
count++;
}

return count;
}
