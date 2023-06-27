#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * Description: finds and prints the largest prime factor
 * of the number 612852475143
 *
 * Return: 0
*/

int main(void)
{
	unsigned long int y, n = 612852475143;

	for (y = 3; y < 782849; y = y + 2)
	{
		while ((n % y == 0) && (n != y))
			n = n / y;
	}
	printf("%lu\n", n);
	return (0);
}
