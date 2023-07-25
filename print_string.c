c
#include "main.h"

/**
 * print_string - Print a string.
 * @str: The string to print.
 * Return: The number of characters printed.
 */
int print_string(char *str)
{
if (!str)
str = "(null)";

int count = 0;
while (*str)
{
_putchar(*str);
count++;
str++;
}

return count;
}
