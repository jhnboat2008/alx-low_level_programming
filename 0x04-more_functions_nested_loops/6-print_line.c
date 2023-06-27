#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: line character
 * Return: void
*/

void print_line(int n)
{
	int x, y;

	if (n <= 0)
		_putchar('\n');
	for (x = 0; x < n; x++)
	{
		for (y = 0; y < x; y++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
