#include "main.h"
/**
 * print_numbers - From 0 to 9
 *
 * Return: nothing
 */
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
