#include "main.h"
/**
 *  _islower - check if an charachter is lowercase
 *
 *  @c: The charechter that want to check
 *
 *  Return: ineger
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
