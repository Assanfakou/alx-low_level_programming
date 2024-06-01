#include "main.h"

void jack_bauer(void)
{
	int f, c, s,j;

	for(f = 0; f <= 2; f++)
	{
		for(c = 0; c <= 9; c++)
		{
			if(!(f == 2 && c != 3))
			for(j = 0; j <= 5; j++)
			{
				for(s = 0; s <= 9; s++)
				{
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
