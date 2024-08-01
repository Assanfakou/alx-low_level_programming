#include "main.h"

/**
 * _strlen - calculate the length of string
 *
 * @s: the string
 *
 * Return: the the length o string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
