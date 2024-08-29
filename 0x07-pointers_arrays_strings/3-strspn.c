#include "main.h"
/**
 * _strspn - calculate the number of elements that match i two strings
 *
 * @s: the string that will be chaecked.
 *
 * @accept: the second string.
 *
 * Return: count.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found;
	char *start_accept;

	while (*s)
	{
		found = 0;
		start_accept = accept;
		while (*start_accept)
		{
			if (*s == *start_accept)
			{
				found = 1;
				count++;
				break;
			}
			start_accept++;
		}
		if (found == 0)
			return (count);
		s++;
	}
	return (count);
}
