#include "main.h"

/**
 * print_chessboard - print the content of matrix.
 *
 * @a: the matrix.
 *
 * Return: Nothing.
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int s;

	i = 0;
	while (i < 8)
	{
		s = 0;
		while (s < 8)
		{
			_putchar(a[i][s]);
			s++;
		}
		_putchar('\n');
		i++;
	}
}
