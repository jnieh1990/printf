#include "main.h"
#include <stdio.h>

/**
 * print_char - Fonction pour afficher un caractère.
 * @args: Liste d'arguments contenant le caractère à afficher.
 *
 * Return: Le nombre de caractères affichés.
 */
int print_char(va_list args)
{
	char c = va_arg(args, int);

	_putchar(c);
	return (1);
}

/**
 * print_string - Fonction pour afficher une chaîne de caractères.
 * @args: Liste d'arguments contenant le pointeur vers la chaîne à afficher.
 *
 * Return: Le nombre de caractères affichés.
 */
int print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (str)
	{
	int count = 0;

	while (*str)
	{
		_putchar(*str);
		str++;
		count++;
	}
	return (count);
	}
	else
	{
		printf("(null)");
		return (6);
		/* Longueur de la chaîne "(null)"*/
	}
}

/**
 * print_int - Fonction pour afficher un entier.
 * @args: Liste d'arguments contenant l'entier à afficher.
 *
 * Return: Le nombre de caractères affichés.
 */
int print_int(va_list args)
{
	int value = va_arg(args, int);
	int res = 0, digit_count, i, divisor, digit;
	unsigned int num, temp;

	if (value < 0)
	{
		_putchar('-');
		res++;
		num = -value;
	}
	else
	{
		num = value;
	}

	digit_count = 0;
	temp = num;

	do {
		temp /= 10;
		digit_count++;
	} while (temp != 0);

	divisor = 1;

	for (i = 1; i < digit_count; i++)
	{
	divisor *= 10;
	}

	do {
	digit = num / divisor;

	_putchar('0' + digit);
	num %= divisor;
	divisor /= 10;
	res++;
	} while (divisor != 0);

	return (res);
}
