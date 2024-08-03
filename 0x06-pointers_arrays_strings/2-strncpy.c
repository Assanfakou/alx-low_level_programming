#include "main.h"

/**
 * _strncpy - cpies the content of src to dest
 *
 * @src: the source that will be copied
 *
 * @dest: the reciiver of src
 *
 * @n: the n element that will be copied from the src to dest
 *
 * Return: dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (src[i] && n > i)
	{
		dest[i] = src[i];
		i++;
	}
	while (n > i)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
