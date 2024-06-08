#include "main.h"

void print_times_table(int n)
{
	int a, b;

	if (n > 15)
		return;
	a = 0;
	while (a <= n)
	{
		b = 0;
		while (b <= n)
		{
			if (b == 0)
				_putchar((a * b) + '0');
			if (a * b <= 9)
			{
				_putchar(44);
				_putchar(32);
				_putchar(32);
				_putchar(32);
				_putchar(a * b + '0');
			}
			else if (a * b > 9 && a * b <= 99)
			{
				_putchar(44);
				_putchar(32);
				_putchar(32);
				_putchar((a * b) / 10 + '0');
				_putchar((a * b) % 10 + '0');
			}
			else if (a * b >= 99)
			{
				_putchar(44);
				_putchar(32);
				_putchar((a * b ) / 100 + '0');
				_putchar(((a * b) / 100) % 10 + '0');
				_putchar((a * b) % 10 + '0');
			}
			b++;
		}
		_putchar('\n');
		a++;
	}
}
