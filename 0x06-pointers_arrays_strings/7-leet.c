#include "main.h"
/**
 * leet - a function that encodes a string into 1337
 * @ptr: input string to be converted
 * Return: give back encoded string
 */
char *leet(char *ptr)
{
	int i, j;
	char string[] = "aAeEoOtTlL";
	char string2[] = "4433007711";

	for (i = 0; ptr[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (ptr[i] == string[j])
			{
				ptr[i] = string2[j];
			}
		}
	}
}
