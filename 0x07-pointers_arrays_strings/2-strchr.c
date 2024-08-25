#include "main.h"
/**
 * *_strchr - compares if c is in s.
 *
 * @s: the string the we will see if there is a c.
 *
 * @c: the charachter that we will see if it's in s.
 *
 * Return: adress of i.
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	return (&s[i]);
}
