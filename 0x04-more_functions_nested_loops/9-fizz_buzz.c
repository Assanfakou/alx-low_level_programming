#include <stdio.h>
/**
 * main - The fizz-buzz test
 *
 * Return: nothing
 */
int main(void)
{
	int s;

	s = 1;
	while (s <= 100)
	{
		if (s % 3 == 0 && s % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (s % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (s % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (s % 3 != 0 && s % 5 != 0)
		{
			printf("%d ", s);
		}
		s++;
	}
	printf("\n");
	return (0);
}
