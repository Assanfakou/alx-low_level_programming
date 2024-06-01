#include "main.h"

int print_last_digit(int c)
{
	c %= 10;
	if(c >= 0)
	{
		_putchar(c + '0');
	}else
		return (c * -1);

	return c;
}
