#include <stdio.h>
/**
 * main - Prints alphabets both in lowercase
 * followed by uppercase letters
 * Return: always 0 (success)
*/

int main(void)
{
	char lower;
	char upper;

	for (lower = 'a'; lower <= 'z'; ++lower)
		putchar(lower);

	for (upper = 'A'; upper <= 'Z'; ++upper)
		putchar(upper);

	putchar('\n');

	return (0);
}
