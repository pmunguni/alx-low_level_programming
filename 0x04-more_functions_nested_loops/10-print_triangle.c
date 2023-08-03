#include "main.h"

/**
 * print_triangle- prints a triangle, followed by a new line.
 * @size:  the size of the triangle
 */
void print_triangle(int size)
{
	int i, j;

	if (size == 0 || size <= 0)
	{
		_putchar('\n');
	}
	for (i = 1; i <= size; i++)
	{
		for (j = 1; j < i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
