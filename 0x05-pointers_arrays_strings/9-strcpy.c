#include "main.h"

/**
 * _strcpy - copies the string in src and put it in dest
 *
 * @src: the string that will be copied
 *
 * @dest: the buffer that will be recieve the the string that was copied in src
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i]	= src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
