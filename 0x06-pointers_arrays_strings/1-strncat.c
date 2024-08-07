#include "main.h"

/**
 * _strncat - a fonction that concatenates two strings
 *
 * @dest: the destination
 *
 * @src: the source
 *
 * @n: the n elements that will copie to destination from src
 *
 * Return: dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j] && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
