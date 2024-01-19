#include <stdio.h>
#include "main.h"
/**
 * _strcpy - funcion that copy one string to another
 * @ dest : input
 * @src: input
 * Return: return to dest original and its printed
 */

char *_strcpy(char *dest, char *src)
{
	char *originaldest = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (originaldest);
}
