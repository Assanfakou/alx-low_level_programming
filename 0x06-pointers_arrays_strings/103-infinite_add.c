#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i;
	int j;
	int s;

	i = 0;
	j = 0;
	s = 0;
	while (n1[i] && n2[j])
	{
		while (r[s] && size_r)
		{
			r[s] = n1[i] + n2[j];
			s++;
		}
		i++;
		j++;
	}
	return (r);
}
