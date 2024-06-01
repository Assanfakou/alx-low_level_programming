#include "main.h"

void print_alphabet_x10(void)
{
	char l;
	char s;

	while (s < 10)
	{
		for (l = 'a'; l <= 'z'; l++)
		{
			_putchar(l);
		}
		_putchar('\n');
		s++;
	}
}
