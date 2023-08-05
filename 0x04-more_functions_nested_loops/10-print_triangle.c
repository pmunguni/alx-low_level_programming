#include "main.h"

/**
 * print_triangle- prints a triangle, followed by a new line.
 * @size:  the size of the triangle
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (i = 1; i <= size; i++)
	{
		for (j = size - i; j >= 1; j--)
		{
			_putchar(' ');
		}
		for (k = 1; k <= i; k++)
		_putchar('#');
	}
	_putchar('\n');
}
