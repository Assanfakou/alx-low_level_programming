#include "main.h"

int print_last_digit(int c)
{
	c %= 10;
	_putchar(c + '0');

	if(c < 0)
	{
		return (c * -1);
	}
	return c;
}
