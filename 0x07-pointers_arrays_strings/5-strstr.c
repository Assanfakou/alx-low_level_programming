#include "main.h"

/**
 * _strstr - checks the two strings if they matche
 *
 * @haystack: the first string.
 *
 * @needle: the second string.
 *
 * Return: the adress of the first string that match the charachter.
 */
char *_strstr(char *haystack, char *needle)
{
	int a;
	int s;
	int n;

	if (*needle == '\0')
		return (haystack);
	a = 0;
	while (haystack[a])
	{
		s = a;
		n = 0;
		while (needle[n] == haystack[s] && needle[n] && haystack[s])
		{
			s++;
			n++;
		}
		if (needle[n] == '\0')
			return (&haystack[a]);
		a++;
	}
	return (0);
}
