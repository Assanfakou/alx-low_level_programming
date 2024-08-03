#include "main.h"

/**
 * _strcat - a fonction that concatenates two strings
 *
 * @dest: the destination
 *
 * @src: the source
 *
 * Return: dest.
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
