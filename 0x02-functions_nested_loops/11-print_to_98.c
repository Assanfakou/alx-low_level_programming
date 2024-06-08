#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print from n to 98
 *
 * @n: THe number in which counting begins
 *
 * Return: Nothing
 */
void print_to_98(int n)
{

	if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			n--;
			if (n >= 98)
			{
				printf(",");
				printf(" ");
			}
		}
	}
	else
	{
		while (n <= 98)
		{
			printf("%d", n);
			n++;
			if (n <= 98)
			{
				printf(",");
				printf(" ");
			}
		}
	}
	printf("\n");
}
