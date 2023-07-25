#include <stdio.h>

/**
 * main - print a..z in reverse
 *
 * Return : give back 0 (success)
 */
int main(void)
{
	int i;

	for (i = 122; i <= 97; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
