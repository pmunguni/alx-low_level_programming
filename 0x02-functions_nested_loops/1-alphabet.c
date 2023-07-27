#include <stdio.h>
#include "main.h"

/**
 * print_alphabet- prints the alphabet in lower case
 *
 * Return: it does not give back anything
 */
void print_alphabet(void)
{
	char alph[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar(alph[i]);
	}
	_putchar('\n');
}
