#include <unistd.h>
#include "main.h"
/**
 * print_times_table - print table of square.
 *
 * @n: the number of squqre
 *
 * Return: Always 0.
 */
void print_times_table(int n)
{
	int a, b;

	if (n > 15)
	{
		return;
	}
	a = 0;
	while (a <= n)
	{
		b = 0;
		while (b <= n)
		{
			if (b == 0)
			{
				_putchar('0');
			}
			if (b > 0 && a * b <= 9)
			{
				write(1, ",   ", 4);
				_putchar((a * b) + '0');
			}
			else if (a * b > 9 && a * b <= 99)
			{
				write(1, ",  ", 3);
				_putchar((a * b) / 10 + '0');
				_putchar((a * b) % 10 + '0');
			}
			else if (a * b >= 99)
			{
				write(1, ", ", 2);
				_putchar((a * b) / 100 + '0');
				_putchar(((a * b) / 100) % 10 + '0');
				_putchar((a * b) % 10 + '0');
			}
			b++;
		}
		_putchar('\n');
		a++;
	}
}
