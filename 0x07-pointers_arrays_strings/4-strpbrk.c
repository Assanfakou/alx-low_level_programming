#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - check if one charachter in accept matches in s.
 *
 * @s: the first string.
 *
 * @accept: the second string.
 *
 * Return: the adress of the charachter that found in s.
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i;
	char *null;

	null = NULL;
	while (*s)
	{
		i = 0;
		while (accept[i])
		{
			if (accept[i] == *s)
			{
				return (&*s);
			}
			i++;
		}
		s++;
	}
	return (null);
}
