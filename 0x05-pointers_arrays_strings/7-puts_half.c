#include "main.h"

/**
 * puts_half - Print the second hald of a string
 *
 * @str: The string
 *
 * Return: Nothing
 */

void puts_half(char *str)
{
	int i;
	int s;

	i = 0;
	while (str[i])
		i++;
	s = i / 2;
	if (i % 2 != 0)
		s = (i - 1) / 2;
	while (str[s])
	{
		_putchar(str[s]);
		s++;
	}
	_putchar('\n');
}

/*
*int main(int ac, char **av)
*{
*	if (ac == 2)
*		puts_half(av[1]);
*	return 0;
*}
*/
