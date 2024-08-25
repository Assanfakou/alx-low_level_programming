#include <stdio.h>

int main ()
{
	int arr[3][3] = { {0, 1, 10},
			  {2, 3, 11},
			  {4, 5, 13}};

	int i, j;

	j = 0;
	while (j < 3)
	{
		i = 0;
		while (i < 3)
		{
			printf("%p ", arr[j]);
			i++;
		}
		j++;
	}
}
