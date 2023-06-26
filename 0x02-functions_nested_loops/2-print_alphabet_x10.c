#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets 10x in lowercase
 *
*/

void print_alphabet_x10(void)
{
	int i;
	i=1;
	char letters;

	while (i++ <= 10)
	{
		for (letters = 'a'; letters <= 'z'; letters++)
			_putchar(letters);
		_putchar('\n');
	}
}
