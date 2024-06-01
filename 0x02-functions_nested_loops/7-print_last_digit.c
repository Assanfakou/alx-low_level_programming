#include "main.h"

int print_last_digit(int c)
{
	c %= 10;
	if(c >= 0)
	{
		_putchar(c + '0');
	}
	else if(c < 0)
	{
		c *= -1;
		_putchar(c + '0');
	}
	return c;
}
