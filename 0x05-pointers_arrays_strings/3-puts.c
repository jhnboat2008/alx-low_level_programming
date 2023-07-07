#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: string to print
 * Return: 0 (success)
*/

void _puts(char *str)
{
	int s = 0;

	while (str[s] != '\0')
	{
		_putchar(str[s]);
		s++;
	}
	_putchar('\n');
}
