#include "main.h"

/**
 * _islower - checks for lower case character
 *@c: the character to be checked
 *
 * Return: give 1 if c is lowercas else 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
