#include "main.h"

/**
 * cap_string - Write a function that capitalizes
 * all words of a string
 * Separators of words: space, tabulation,
 * new line, ,, ;, ., !, ?, ", (, ), {, and }
 * @c: string
 * Return: address of c
*/

char *cap_string(char *c)
{
	int a = 0, b;
	char s[] = " \t\n,;.!?\"(){}";

	while (*(c + a))
	{
		if (*(c + a) >= 'a' && *(c + a) <= 'z')
		{
			if (a == 0)
				*(c + a) -= 'a' - 'A';
			else
			{
				for (b = 0; b <= 12; b++)
				{
					if (s[b] == *(c + a - 1))
						*(c + a) -= 'a' - 'A';
				}
			}
		}
		a++;
	}
	return (c);
}
