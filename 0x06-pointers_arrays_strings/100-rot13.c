#include "main.h"

/**
 * rot13 - Write a function that encodes a string using rot13
 * @c: string
 * Return: address of c
*/

char *rot13(char *c)
{
	int a, b;
	char c[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"
	char d[] = "mnopqrstuvwxyzabcdefghijklMNOPQRSTUVWXYZABCDEFGHIJKL

	for (a = 0; *(c + a); a++)
	{
		for (b = 0; b < 52; b++)
		{
			if (c[b] == *(c + a))
			{
				*(c + a) = d[b];
				break;
			}
		}
	}
	return (c);
}
