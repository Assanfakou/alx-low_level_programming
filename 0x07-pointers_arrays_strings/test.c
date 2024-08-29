char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	int		walk;

	if (!*to_find)
		return (str);
	i = 0;
	while (str[i])
	{
		j = 0;
		walk = i;
		while (str[walk] == to_find[j])
		{
			j++;
			walk++;
			if (!to_find[j])
				return (&str[i]);
		}
		i++;
	}
	return (&str[i]);
}
#include <stdio.h>

int main(void)
{
    char *s = "hello";
    char f;

    f = ft_strstr(s, 's');

    if (f != NULL)
    {
        printf("%s\n", f);
    }
    return (0);
}
