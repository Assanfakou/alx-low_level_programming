#include "main.h"

void print_line(int n)
{
	char g;
	g = n * 57;
	while (g < n)
	{
		_putchar(g + '0');
		n++;
	}
}
