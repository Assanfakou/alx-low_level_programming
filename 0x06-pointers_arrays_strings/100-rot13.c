#include "main.h"

/**
 * rot13 - changed eny letter to 13 letter next
 *
 * @st: the string that will be codded
 *
 * Return: st.
 */

char *rot13(char *st)
{
	int i;
	int s;
	int b;
	char nor[] = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
	char rot[] = "NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm";

	i = 0;
	while (st[i])
	{
		b = 0;
		s = 0;
		while (nor[b] && rot[s])
		{
			if (st[i] == nor[b])
			{
				st[i] = rot[s];
				break;
			}
			b++;
			s++;
		}
	i++;
	}
	return (st);
}
