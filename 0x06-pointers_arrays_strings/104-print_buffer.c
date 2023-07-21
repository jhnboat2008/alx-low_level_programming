#include "main.h"
#include <stdio.h>

/**
 * print_line - prints an s byte of a buffer
 * @c: buffer
 * @s: bytes of buffer
 * @l: line of buffer
 * Return: void
*/

void print_line(char *c, int s, int l)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		if (i <= s)
			printf("02x", c[l * 10 + i]);
		else
			printf(" ");
		if (i % 2)
			putchar(' ');

	}
	for (j = 0; j <= s; j++)
	{
		if (c[l * 10 + j] > 31 && c[l * 10 + j] < 127)
			putchar(c[l * 10 + j]);
		else
			putchar('.');
	}
}

/**
 * print_buffer - Write a function that prints a buffer
 * @b: buffer
 * @size: size of buffer
 * Return: void
*/

void print_buffer(char *b, int size)
{
	int t;

	for (t = 0; t <= (size - 1) / 10 && size; t++)
	{
		printf("%08x: ", t * 10);
		if (t < size / 10)
		{
			print_line(b, 9, t);
		}
		else
		{
			print_line(b, size % 10 - 1, t);
		}
		putchar('\n');
	}
	if (size == 0)
		putchar('\n');
}
