#include "main.h"
/**
 * print_diagonal - Draw a diagonal
 *
 * @n: THe height of a diagonal
 *
 * Return: nothing
 */
void print_diagonal(int n)
{
	int s, l;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
	s = 0;
	while (s < n)
	{
		l = 0;
		while (l < s)
		{
			_putchar(' ');
			l++;
		}
		_putchar(92);
		_putchar('\n');
		s++;
	}
	}
}
