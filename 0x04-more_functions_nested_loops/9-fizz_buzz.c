#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100
 *
 * Return: give 0 success)
 */
int main(void)
{
	int i;
	char FizzBuzz[] = "FizzBuzz";
	char Fizz[] = "Fizz";
	char Buzz[] = "Buzz";

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			printf("%s ", FizzBuzz);
		}
		else if (i % 3 == 0)
		{
			printf("%s ", Fizz);
		}
		else if (i % 5 == 0)
		{
			printf("%s ", Buzz);
		}
		else
		{
			printf("%i ", i);
		}
		printf("\n");
	}
	return (0);
}
