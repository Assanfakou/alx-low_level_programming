#include "main.h"

/**
 * print_number - print anynumber with recursion.
 *
 * @n: the number that will be printed.
 *
 * Return: Always 0.
 */
void print_number(int n)
{
	unsigned int nb;

	if (n < 0)
	{
		_putchar('-');
		nb = -n;
	}
	else
		nb = n;
	if (nb > 9)
		print_number(nb / 10);
	_putchar((nb % 10) + '0');
}
