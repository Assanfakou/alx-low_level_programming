#include "main.h"
/**
 * more_numbers - From 0 to 9
 *
 * Return: nothing
 */
void more_numbers(void)
{
	char a, b;

	while (a < 10)
	{
		b = 0;
		while (b <= 14)
		{
			if (b > 9)
			{
				_putchar((b / 10) + '0');
			}
			_putchar((b % 10) + '0');
			b++;
		}
		_putchar('\n');
		a++;
	}
}
