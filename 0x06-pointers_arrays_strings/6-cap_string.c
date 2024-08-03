#include "main.h"

/**
 * cap_string - capitalaize the first charachter in any word
 *
 * @st: the string
 *
 * Return: the string if it's chsnged.
 */

char *cap_string(char *st)
{
	int i;

	while (st[i])
	{
		if (st[i] == ' ' && (st[i + 1] >= 'a' && st[i + 1] <= 'z'))
		{
			st[i + 1] -= 32;
		}
		else if (st[i] == '\t' && (st[i + 1] >= 'a' && st[i + 1] <= 'z'))
		{
			st[i + 1] -= 32;
		}
		else if (st[i] == '\n' && (st[i + 1] >= 'a' && st[i + 1] <= 'z'))
			st[i + 1] -= 32;
		else if (st[i] == '.' && (st[i + 1] >= 'a' && st[i + 1] <= 'z'))
			st[i + 1] -= 32;
		i++;
	}
	return (st);
}
