#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of
 * integers where n is the number of elements of the
 * array to be printed, numbers must be separated by
 * comma, followed by a space
 * numbers should be displayed in the same order as
 * they are stored in the array
 * @a: integers
 * @n: number of elements
*/

void print_array(int *a, int n)
{
	int y;

	for (y = 0; y < n; y++)
		if (y != n - 1)
		printf("%d, ", a[y]);
		else
		printf("%d", a[y]);
	printf("\n");
}
