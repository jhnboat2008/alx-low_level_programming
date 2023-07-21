#include "main.h"

/**
 * print_number - Write a function that prints an integer
 * @n: integer
 * Return: none
*/

void print_number(int n)
{
	unsigned int y;

	if (n < 0)
	{
		_putchar('-');
		n *= -1
	}

	y = n;

	if (y / 10)
		print_number(y / 10);

	_putchar(y % 10 + '0');
}
