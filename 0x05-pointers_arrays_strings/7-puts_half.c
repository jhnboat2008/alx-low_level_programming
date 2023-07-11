#include "main.h"

/**
 * puts_half - prints half of a string
 * prints second half of the string
 * if number of characters is odd, the function should
 * print the last n characters of the string
 * n = (length_of_the_string - 1) / 2
 * @str: string
*/

void puts_half(char *str)
{
	int string = 0, n;

	while (str[string] != '\0')
		string++;
	if (string + 1 % 2 != '0')
		n = (string - 1) / 2;
	else
		n = (string / 2);
	n++;

	for (string = n; str[string] != '\0'; string++)
	_putchar(str[string]);
	_putchar('\n');
}
