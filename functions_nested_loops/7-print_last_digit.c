#include "main.h"

/**
 * print_last_digit - affiche le dernier chiffre d'un nombre
 * @n: nombre à traiter
 *
 * Return: valeur du dernier chiffre
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
	{
		/* gérer le cas spécial INT_MIN */
		last_digit = (n % 10) * -1;
	}
	else
	{
		last_digit = n % 10;
	}
	_putchar('0' + last_digit);
	return (last_digit);
}
