#include <stdio.h>

int main(void)
{
	char alp = 'z';
	while (alp >= 'a')
	{
		putchar(alp);
		alp--;
	}
	putchar('\n');
	return(0);
}


