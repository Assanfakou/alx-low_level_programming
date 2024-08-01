#include "main.h"

/**
 * _atoi - change the asscii to integer
 *
 * @s: the string that will be changed
 *
 * Return: result * signe
 */

int _atoi(char *s)
{
	int i;
	int signe;
	int result;

	i = 0;
	result = 0;
	signe = 1;
	while ((s[i] >= 9 && s[i] <= 13) || s[i] == 32)
		i++;
	while (s[i] == '+' || s[i] == '-')
	{
		if (s[i] == '-')
			signe = -1;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + (s[i] - '0');
		i++;
	}
	return (result * signe);
}
