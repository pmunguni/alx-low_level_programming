#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lower case 0 times
 *@letter
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i <= 10; i++)
	{
		char letter;

		for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
		_ putchar('\n');
	}
}
