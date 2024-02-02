#include "main.h"
/**
 * *_strcat : joinstwostrings ogether
 * @dest- first string
 * @src -ssecond string
 * Return- give back cartinated string
 */
char *_strcat(char *dest, char *src)
{
	char *origin = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return(origin);
}

