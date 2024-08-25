#include "main.h"

/**
 * *_memcpy - copies the n bytes of content from src to dest.
 *
 * @dest: the destenation of content that will be copied.
 *
 * @src: the source of content.
 *
 * @n: n bytes of content that will be copied.
 *
 * Return: dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (*dest && *src && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
