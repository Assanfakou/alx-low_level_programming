#include "main.h"

/**
 * leet - changes the string to chefred code.
 *
 * @s: the string that will be chifred.
 *
 * Return: s.
 */

char *leet(char *s)
{
	char le[] = "A4a4E3e3T7t7L1l1O0o0";
	int i = 0;
	int b;

	while (s[i])
	{
	b = 0;
		while (le[b])
		{
			if (s[i] == le[b])
			{
				s[i] = le[b + 1];
				break;
			}
			b++;
		}
		i++;
	}
	return (s);
}
