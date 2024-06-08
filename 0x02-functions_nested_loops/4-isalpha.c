#include "main.h"
/**
 *  _isalpha - check if an charachter is alpha
 *
 *  @c: The charechter that want to check
 *
 *  Return: ineger
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
