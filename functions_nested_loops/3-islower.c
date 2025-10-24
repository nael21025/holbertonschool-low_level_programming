#include "main.h"

/**
 * _islower - vérifie si un caractère est une lettre minuscule
 * @c: le caractère à vérifier
 *
 * Return: 1 si c est une minuscule, 0 sinon
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
