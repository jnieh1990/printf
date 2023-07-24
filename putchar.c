#include "main.h"
#include <unistd.h>

/**
 * _putchar - Fonction personnalisée pour écrire un caractère sur la sortie standard.
 * @c: Le caractère à écrire.
 *
 * Return: Le nombre de caractères écrits.
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}
