#include "main.h"
/**
 * _strncpy- afunction that copies a string withn character
 *@dest: input string where its to be copied
 *@src: string tobe copied
 *@n :number of characters
 *Return: give back copiedstring
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *origin = dest;

	for (int i = 0; i < n && *src != '\0'; i++)
	{
		dest[i] = src[i];
	}
	*dest = '\0';

	return (origin);
}
