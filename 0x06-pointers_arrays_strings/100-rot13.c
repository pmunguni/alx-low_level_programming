#include "main.h"
/**
 * rot13 - a function that encodes a string into 1337
 * @ptr: input string to be converted
 * Return: give back encoded string
 */
char *rot13(char *ptr)
{
	int i, j;
	char s1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; ptr[i] != '\0'; i++)
	{
		for (j = 0; j < (26 * 2); j++)
		{
			if (ptr[i] == s1[j])
			{
				ptr[i] = s2[j];
			}
		}
	}
	return (ptr);
}
