#include "main.h"

/**
 * _strncpy - Write a function that copies a string
 * Your function should work exactly like strncpy
 * @dest: string1
 * @src: string2
 * @n: integer
 * Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
int s;

	for (s = 0; s < n && *(src + s); s++)
	{
		*(dest + s) = *(src + s);
	}
	for (; s < n; s++)
	{
	*(dest + s) = '\0';
	}
	return (dest);
}
