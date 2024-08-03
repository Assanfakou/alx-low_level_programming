#include "main.h"

/**
 * reverse_array - reverse the array
 *
 * @a: the array
 *
 * @n: the size of the array
 *
 * Return: Nothing.
*/

void reverse_array(int *a, int n)
{
	int swaper;
	int j;
	int i;

	j = 0;
	i = n - 1;
	while (j <= i)
	{
		swaper = a[j];
		a[j] = a[i];
		a[i] = swaper;
		j++;
		i--;
	}
}
