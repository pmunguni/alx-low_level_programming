#include "main.h"

/**
 * swap_int- a function that swaps two intergers
 *
 *@a: a variable
 *@b: a variable
 *return: a and b
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
