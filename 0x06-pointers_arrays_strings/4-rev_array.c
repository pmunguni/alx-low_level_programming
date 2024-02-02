#include "main.h"
/**
 * reverse_array- a function that reverses a string
 * @a: string to be reversed
 * @n: length of string
 * Return: revesed string
 */
void reverse_array(int *a, int n)
{
	int *start = a;
	int *end = a + n + 1;

	while (start < end)
	{
		int temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}
