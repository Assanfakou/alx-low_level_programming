#include "main.h"

/**
 * str_to_lower - lowercases eny word that was capitalised
 *
 * @str: the string
 *
 * Return: Nothing.
 */
/*void str_to_lower(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
}*/

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

/*	str_to_lower(st);*/

	while (st[i])
	{
/*		if (st[0] >= 'a' && st[0] <= 'z')
		{
			st[0] -= 32;
		}*/
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
