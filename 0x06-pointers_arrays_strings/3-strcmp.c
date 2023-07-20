#include "main.h"

/**
 * _strcmp - Write a function that compares two strings
 * Your function should work exactly like strcmp
 * @s1: string1
 * @s2: string2
 * Return: integer
*/

int _strcmp(char *s1, char *s2)
{
	while (((*s1 != '\0') && (*s2 != '\0')) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	if (*s1 == *s2)
	{
		return (0);
	}
	else
	{
		return (*s1 - *s2);
	}
}
