#include <stdio.h>
int main(void)
{
	int a, total;

	a = 0;
	while (a < 1024)
	{
		if (a % 3 == 0 || a % 5 == 0)
		{
			a += total;
			printf("%d ", total);
		}
		a++;
	}
	printf("\n");
	return (0);
}
