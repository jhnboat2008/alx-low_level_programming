#include "main.h"

/**
 * _isupper - checks for uppercase characters
 * @c: uppercase character
 * Return: 1 if c is uppercase
*/

int _isupper(int c)
{
	int c;

	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

