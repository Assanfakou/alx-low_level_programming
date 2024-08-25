#include "main.h"

/**
 * *_memset - fills a buffer with hexa.
 *
 * @s: the buffer that will be filled.
 *
 * @b: the constant byte.
 *
 * @n :n bytes of memory area.
 *
 * Return: the buffer s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
