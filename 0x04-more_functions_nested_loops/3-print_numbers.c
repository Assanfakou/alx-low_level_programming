#include "main.h"

void print_numbers(void)
{
	char h = '0';

	while (h <= '9')
	{
		_putchar(h);
		h++;
	}
	_putchar('\n');
}
