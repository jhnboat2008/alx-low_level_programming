#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string
*/

void print_rev(char *s)
{
	int a, n;

	n = 0;
	while (s[n] != '\0')
		n++;

	for (a = n - 1; a >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
