#include "main.h"

/**
 * print_rev - a function that prints string in reverse
 * @s : the input string
 */
void print_rev(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	while (length > 0)
	{
		_putchar(*(--s));
	}
	_putchar('\n');
}
