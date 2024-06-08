#include <stdio.h>

int main(void)
{
	int a, b, x, total;

	a = 1;
	b = 2;
	x = a + b;
	total = 0;
	while (x < 4000000)
	{
		x += total;
		x++;
	}
	printf("%d\n", total);
	return (0);
}


