#include <stdio.h>

#include "main.h"
/**
 * puts2 - function printing one  or two characters
 * @str : its theinput of string
 */
void puts2(char *str)
{
	if (*str != '\0')
	{
		for (int i = 0; i >= 0; i + 2)
		{
			_putchar(str[i]);
			_putchar('\n');
		}
	}
}
