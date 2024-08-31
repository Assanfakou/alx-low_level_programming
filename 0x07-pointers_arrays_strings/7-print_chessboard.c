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
	while (*a[i])
	{
		s = 0;
		while (*a[s])
		{
			_putchar(a[i][s]);
			s++;
		}
		_putchar('\n');
		i++;
	}
}
