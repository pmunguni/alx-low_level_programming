#includie <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	printf("%d",n);
	if (n > 0 )
	{
		printf("if the number is greater than 0: is positive\n");
        }

	if else (n == 0)
	{
	        printf("if the number is 0: is zero\n");
	}

	else (n < 0)
	{
		printf("if the number is less than 0: is negative\n");
	}
	return (0);
}
