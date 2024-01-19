#include <stdio.h>
#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * @str: input
 * Return: halfof string
 */
void puts_half(char *str)
{
	int i;
	int lenght = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		lenght++;
	}
	if ((lenght % 2) == 0)
	{
		for (i = 0; i <= (lenght / 2); i++)
			_putchar(str[i]);
		_putchar('\n');
	}
	else
	{
		for (i = 0; i <= ((lenght + 1) / 2); i++)
		{
			_putchar(str[i]);
		_putchar('\n');
		}
	}
}
