#include "main.h"

/**
 * print_alphabet_x10 - affiche l’alphabet en minuscules 10 fois,
 * chacune suivie d’un saut de ligne
 */
void print_alphabet_x10(void)
{
	int i;
	char letter;

	for (i = 0; i < 10; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
