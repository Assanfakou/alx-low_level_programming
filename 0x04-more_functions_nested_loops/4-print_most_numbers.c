#include "main.h"

void print_most_numbers(void)
{
	char h;
	
	for (h = '0'; h <= '9'; h++)
	{
		if (h == '2' || h == '4')
			continue;
		_putchar(h);
	}
	_putchar('\n');
}
