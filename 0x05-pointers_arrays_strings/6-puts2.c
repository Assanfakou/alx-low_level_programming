#include "main.h"

/**
 * puts2 - print every other character with the first character
 *
 * @str: the string
 *
 * Return: Nothing
 */

void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
