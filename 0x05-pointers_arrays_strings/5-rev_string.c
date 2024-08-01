#include "main.h"

/**
 * rev_string - revers the string in memory
 *
 * @s: the string that will be reversed
 *
 * Return: Nothing
 */

void rev_string(char *s)
{
	int i;
	int j;
	char temp;

	j = 0;
	while (s[j])
		j++;
	j--;
	i = 0;
	while (j > i)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}
