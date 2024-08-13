#include "main.h"

/*
*void print_number(int n)
*{
*	unsigned int nb;
*
*	if (n < 0)
*	{
*		_putchar('-');
*		nb = -n;
*	}
*	else
*		nb = n;
*	if (nb > 9)
*		print_number(nb / 10);
*	_putchar((nb % 10) + '0');
}*
*/

/**
 * print_number - print number in ulterrative
 *
 * @n: number that will be recursseved
 *
 * Return: Always 0.
 */
void print_number(int n)
{
	unsigned int nb;
	long int div = 1;

	if (n < 0)
	{
		_putchar('-');
		nb = -n;
	}
	else if (n == 0)
		_putchar('0');
	else
		nb = n;
	while (nb / div > 0)
	{
		div = div * 10;
	}
	div = div / 10;
	while (div > 0)
	{
		_putchar((nb / div) + '0');
		nb = nb % div;
		div = div / 10;
	}
}
