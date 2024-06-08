#include "main.h"
/**
 * print_most_numbers - From 0 to 9
 *
 * Return: nothing
 */
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
