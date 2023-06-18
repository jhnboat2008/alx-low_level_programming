#include <stdio.h>
/**
 * main - Prints all numbers of base 16 in lowercase
 *
 * Return: always 0 (success)
*/

int main(void)
{
	int x;
	char lower;

	for (x = 0; x < 10; x++)
		putchar((x % 10) + '0');

	for (lower = 'a'; lower <= 'f'; lower++)
		putchar(lower);

	putchar('\n');

	return (0);
}
