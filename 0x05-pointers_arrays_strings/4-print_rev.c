#include "main.h"

/**
 * print_rev - revers of the string
 *
 * @s: the string
 *
 * Return: Nothing
 */

void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	i--;
	while (s[i])
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
