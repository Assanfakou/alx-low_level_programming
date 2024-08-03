#include "main.h"

/**
 * string_toupper - returns every letter to uppercase
 *
 * @str: the string that will be uppercased
 *
 * Return: the string
*/

char *string_toupper(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
