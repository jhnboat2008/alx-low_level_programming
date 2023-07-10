#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string
*/

void rev_string(char *s)
{
	int x = 0, y, t;
	char z;

	while (s[x] != '\0')
	{
		x++;
	}
	t = x - 1;

	for (y = 0; t >= 0 && y < t; t--, y++)
	{
		z = s[y];
		s[y] = s[t];
		s[t] = d;
	}
}
