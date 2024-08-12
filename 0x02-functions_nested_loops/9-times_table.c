#include "main.h"
/**
 * times_table - Print the table of meltuplication
 *
 * Return: Nothing
 *
 */
void times_table(void)
{
	int a, b;

	a = 0;
	while (a <= 9)
	{
		b = 0;
		while (b <= 9)
		{
			if (b == 0)
			{
				_putchar('0');
			}
			else if (a * b > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((a * b) / 10 + '0');
				_putchar((a * b) % 10 + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(a * b + '0');
			}
			b++;
		}
		_putchar('\n');
		a++;
	}
}
