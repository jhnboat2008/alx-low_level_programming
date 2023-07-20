#include "main.h"

/**
 * _strcat - Write a function that concatenates two strings
 * This function appends the src string to the dest
 * string, overwriting the terminating null byte (\0) at
 * the end of dest, and then adds a terminating null byte
 * @dest: string1
 * @src: string2
 * Return: string c
*/

char *_strcat(char *dest, char *src)
{
	char *c = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (c);
}
