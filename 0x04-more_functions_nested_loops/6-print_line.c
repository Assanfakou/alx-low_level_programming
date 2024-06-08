#include "main.h"
/**
 * print_line - From 0 to 9
 *
 * @n: the number of _
 *
 * Return: nothing
 */
void print_line(int n)
{
	int g;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		g = 0;
		while (g < n)
		{
			_putchar('_');
			g++;
		}
		_putchar('\n');
	}
}
