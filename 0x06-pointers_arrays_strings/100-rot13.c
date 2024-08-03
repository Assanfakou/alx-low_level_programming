#include "main.h"

/**
 * rot13 - changed eny letter to 13 letter next
 *
 * @st: the string that will be codded
 *
 * Return: Always 0.
 */

char *rot13(char *st)
{
	int i;

	i = 0;
	while (st[i])
	{
		if (st[i] >= 'a' && st[i] <= 'm')
		{
			st[i] += 13;
		}
		else if (st[i] >= 'n' && st[i] <= 'z')
		{
			st[i] -= 13;
		}
		i++;
	}
	return (st);
}
