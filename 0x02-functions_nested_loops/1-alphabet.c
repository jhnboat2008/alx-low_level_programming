#include "main.h"

/**
 * print_alphabet - prints alphabetes in lowercase
*/

void print_alphabet(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
		_putchar(letters);

	_putchar('\n');
}
