#include <stdio.h>

int main(void)
{
	int a, b, c, d;

	a = 1;
	b = 2;
	c = a + b;
	d = c + b;
	while (d < 50)
	{
		printf("%d ,", d);
		d++;
	}
	return (0);
}
