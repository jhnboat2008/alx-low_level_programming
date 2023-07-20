#include "main.h"

/**
 * reverse_array - Write a function that reverses the content of
 * an array of integers
 * @a: integer1
 * @n: integer2
 * Return: void
*/

void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; (i < (n - 1) / 2); i++)
	{
		j = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = j;
	}
}
