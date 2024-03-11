#include <stdio.h>

int main(void)
{
	int num;

	for (num = 0 ;num <= 89 ;num++)
	{
		putchar(48 + num / 10);
		putchar(48 + num % 10);


	if (num < 9)

		putchar(32);
		putchar(44);
	}

	putchar('\n');
	return (0);
}
