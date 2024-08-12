#include "main.h"
/**
 * _isdigit - Checkes if charachter is digit
 *
 * @c: The charachter
 *
 * Return: 1 if it is digit
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
