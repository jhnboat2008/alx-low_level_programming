#include "main.h"

/**
 * string_toupper - Write a function that changes all
 * lowercase letters of a string to uppercase.
 * @c: string
 * Return: character
*/

char *string_toupper(char *c)
{
	int x;

x = 0;
	while (*(c + x))
	{
		if (*(c + x) >= 'a' && *(c + x) <= 'z')
			*(c + x) -= 'a' - 'A';
		x++;
	}
	return (c);
}
