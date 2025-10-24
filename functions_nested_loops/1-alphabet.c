#include "main.h"

/**
 * print_alphabet - affiche l'alphabet en minuscules suivi d'une nouvelle ligne
 *
 * Return: Rien (void)
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
