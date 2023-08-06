#include <stdio.h>

/**
 * largestfactor- prints the the largest factor
 * @number: the number to be cheked
 *
 * Return: give bak the largest prime factor
 */
long largestfactor(long number)
{
	long largestfactor = 2;

	while (number >= largestfactor)
	{
		if (number < 0)
		{
			printf("please give positive number\n");
		}
		if (number % largestfactor == 0)
		{
			number /= largestfactor;
		}
		else
		{
			largestfactor++;
		}
	}
	return (largestfactor);
}
/**
 * main - give largest prime factor
 *
 * Return: give back 0 for success
 */
int main(void)
{
	long number = 612852475143;
	long largestprime = largestfactor(number);

	printf("largest prime factor is %li \n", largestprime);
	return (0);
}
