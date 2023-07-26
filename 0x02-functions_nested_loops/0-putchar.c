#include <stdio.h>

/**
 * main - to print putchar
 *
 * Return: to give back 0  success
 */
int main(void)
{
	char name[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		putchar(name[i]);
		return (0);
	}
}


