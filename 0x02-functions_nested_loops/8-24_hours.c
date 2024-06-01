#include "main.h"

void jack_bauer(void)
{
	int f, c, s,j;

	for(f = 0; f <= 2; f++)
	{
		for(c = 0; c <= 9; c++)
		{
			for(j = 0; j <= 5; j++)
			{
				for(s = 0; s <= 9; s++)
				{
					if (f == 2 && c == 3 && j == 5 && s == 9)		
						break;
					_putchar(f + '0');
					_putchar(c + '0');
					_putchar(':');
					_putchar(j + '0');
					_putchar(s + '0');
					_putchar('\n');
				}
			}
		}
	}
	return;
}
