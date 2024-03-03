#include <stdio.h>

int main (void)
{
	char a = 'a';
	char b = '\n';
	putchar(a);
	while (a <= 'z')
	{
		a++;
	if (a != 'e' && a != 'q')	
      	putchar(a);
	   continue;
	}
  	putchar(b);

	return(0);
}


