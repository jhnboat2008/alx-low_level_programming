#include "main.h"

/**
 * _strncat - Write a function that concatenates two strings
 * The _strncat function is similar to the _strcat function
 * except that it will use at most n bytes from src; and
 * src does not need to be null-terminated if it contains n
 * or more bytes
 * @dest: string1
 * @src: string2
 * @n: bytes
 * Return: a pointer to the resulting string dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
	{
		continue;
	}
	for (b = 0; src[b] != '\0' && b < n; b++)
	{
		dest[a + b] = src[b];
	}
	dest[a + b] = '\0';
	return (dest);
}
