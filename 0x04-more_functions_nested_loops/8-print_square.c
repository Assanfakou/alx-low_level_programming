#include "main.h"
/**
 * print_square - Draw a diagonal
 *
 * @size: THe size of the square
 *
 * Return: nothing
 */
void print_square(int size)
{
	int g, s;

	if (size == 0)
	{
		_putchar('\n');
	} else
	{
		g = 0;
		while (g < size)
		{
			s = 0;
			while (s < size)
			{
				_putchar('#');
				s++;
			}
			_putchar('\n');
			g++;
		}
	}
}
