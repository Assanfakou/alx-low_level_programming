#include "main.h"
#include <stdio.h>

/**
 * print_array - print the elements of an array separeted by a comma and space
 *
 * @a: The array
 *
 * @n: the size of this array
 *
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
