#include <stdio.h>
/**
 * main - Prints the alphabets in lowercase
 * Return: Always 0 (success)
*/

int main(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; ++letters)
		putchar(letters);
	putchar('\n');

	return (0);
}
