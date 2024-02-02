#include "main.h"
/**
 *string_toupper- a functionthat converts astring tolower case
 *@str: input string
 *Return: modified string
 */

char *string_toupper(char *str)
{
	char *temp = str;

	while (*temp != '\0')
	{

		 if (*temp >= 'a' && *temp <= 'z')
		 {

			*temp = *temp - ('a' - 'A');
		 }
		
		temp++;
	}
	return (str);
}
