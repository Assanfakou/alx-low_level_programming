#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - print the sum of two diagonal
 *
 * @a: the buffer.
 *
 * @size: the size of 2D array.
 *
 * Return: Nothing.
 */
void print_diagsums(int *a, int size)
{
	int primary_sum;
	int secondary_sum;
	int i;

	primary_sum = 0;
	secondary_sum = 0;
	i = 0;
	while (i < size)
	{
		primary_sum += *(a + i * size + i);
		secondary_sum += *(a + i * size + (size - 1 - i));
		i++;
	}
	printf("%d, %d\n", primary_sum, secondary_sum);
}
