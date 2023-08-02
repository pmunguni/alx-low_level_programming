#include "main.h"

/**
 *_isupper - cheks for uppercase letters
 *@c: character to be cheked
 *
 * Return: give 0 (success)
 */
int _isupper(int c)
{
	int i;

	for (i = 0; i < c; i++)
	{
	if (c >= 65 && c <= 90)
	return (1);
	}
	return (0);
}
