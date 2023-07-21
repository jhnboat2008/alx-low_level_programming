#include "main.h"

/**
 * rot13 - Write a function that encodes a string using rot13
 * @c: string
 * Return: address of c
*/

char *rot13(char *s)
{
	int a, b;
	char c[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"
	char d[] = "mnopqrstuvwxyzabcdefghijklMNOPQRSTUVWXYZABCDEFGHIJKL

	for (a = 0; *(s + a); a++)
	{
		for (b = 0; b < 52; b++)
		{
			if (c[b] == *(s + a))
			{
				*(s + a) = d[b];
				break;
			}
		}
	}
	return (s);
}