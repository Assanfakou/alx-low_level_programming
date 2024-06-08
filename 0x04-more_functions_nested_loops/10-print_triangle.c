#include "main.h"
/**
 * print_triangle - let's print a triangle
 *
 * @size: The size of the triangle
 *
 * Return: Nothing
 */
void print_triangle(int size)
{
	int n, c, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	n = 1;
	while (n <= size)
	{
		c = size - n;
		while (c > 0)
		{
			_putchar(' ');
			c--;
		}
		k = 0;
		while (k < n)
		{
			_putchar('#');
			k++;
		}
		_putchar('\n');
		n++;
	}
}
