#include "main.h"

/**
 * print_number - prints an integer
 * not allowed to use long
 * not allowed to use arrays or pointers
 * not allowed to hard-code special values
 * @n: input integer value
 * Return: void
*/

void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		_putchar(45);
		i = -i;
	}
	if (i / 10)
	{
		print_number(i / 10);
	}
	_putchar(i % 10 + '0');
}
