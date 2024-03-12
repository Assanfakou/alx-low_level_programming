#include <stdio.h>

int main(void)
{
	int n;
	int m;

	for (n = 0; i <= 9; n++)
	{
		for (m = n; m <= 9; m++)
		{
			if (n == m)
				continue;
			putchar('0' + n);
			putchar('0' + m);
	if (!(n == 8 || m == 9))

		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');
	return(0);
}
