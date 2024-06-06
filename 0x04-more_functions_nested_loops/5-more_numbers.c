#include "main.h"

void more_numbers(void)
{
	char a, b;

	while (a <= 10)
	{
		b = 0;
		while (b <= 14)
		{
			if (b > 9)
			{	
				_putchar((b / 10) + '0');
			}
				_putchar((b % 10) + '0');

			b++;
		}
		_putchar('\n');
		a++;
	}
}
		
