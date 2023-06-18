#include <stdio.h>
/**
 * main - Printing alphabets in the reverse order
 *
 * Return: always 0 (success)
*/

int main(void)
{
	char lower;

	for (lower = 'z'; lower >= 'a'; lower--)
	putchar(lower);

	putchar('\n');

	return (0);
}
