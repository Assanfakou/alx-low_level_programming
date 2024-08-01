#include "main.h"

/**
 * swap_int - swap two integers
 *
 * @a: integer one
 *
 * @b: integer two
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *b;
	*b = *a;
	*a = c;
}
