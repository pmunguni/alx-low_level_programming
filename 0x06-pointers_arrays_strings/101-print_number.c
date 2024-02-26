#include "main.h"
/**
 * print_number - function that prints  integer
 * @n: the integer number to be  printed
 * Return: give the integer back
 */
void print_number(int n)
{
	unsigned int n1 = n;

	if (n < 0)
	{
		_putchar('-');
	}
	if (n1 / 10 != 0)
	{
		print_number(n1 / 10);
	}
	_putchar((n1 % 10) + '0');
}
