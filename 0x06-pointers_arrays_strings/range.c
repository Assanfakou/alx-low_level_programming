#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, unsigned int max)
{
	unsigned int	l;
	unsigned int	i;

	l = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(unsigned int) * l);
	if (*range == NULL)
		return (-1);
	i = 0;
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (l);
}

#include <stdio.h>

int main()
{
    unsigned i;
    int *range;

    ft_ultimate_range(&range, 1, 100000000);

    for (i = 1; i < 100000000; i++)
    {
        printf("%d, ", i);
    }
}

