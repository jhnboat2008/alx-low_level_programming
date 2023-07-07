#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string character
 * Description: returns string length
 * Return: 0 (success)
*/

int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
