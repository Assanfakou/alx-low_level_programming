#include "main.h"
/**
 * print_last_digit - As the name said
 *
 * @c: THe digit
 *
 * Return: Integer
 */
int print_last_digit(int c)
{
	c %= 10;
	if (c >= 0)
	{
		_putchar(c + '0');
	}
	else if (c < 0)
	{
		c *= -1;
		_putchar(c + '0');
	}
	return (c);
}
