#include "main.h"

/**
 * _strlen- a function tha returns length of string
 *
 * @s: an iput pointing to the first character of string
 * Return: length
 */
int _strlen(char *s)
{
	int length;

	length = 0;
	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
