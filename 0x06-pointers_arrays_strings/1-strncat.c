#include "main.h"
/**
 *_strncat- joinstwostrings ogether
 *@dest: first string
 *@src: ssecond string
 *@n: input characters to be printed
 *Return: give back cartinated string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *origin = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && *src > 0)
	{
		*dest = *src;
		dest++;
		src++;
		--n;
	}

	*dest = '\0';
	return (origin);
}

