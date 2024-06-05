#include <stdio.h>
int main(void)
{
	int a, total;

	total = 0;
	a = 0;
	while (a < 1024)
	{
		if (a % 3 == 0 || a % 5 == 0)
		{
			total += a;
		}
		a++;
	}
	printf("%d\n", total );
	return (0);
}
