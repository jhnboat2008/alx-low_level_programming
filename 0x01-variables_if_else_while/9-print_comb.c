#include <stdio.h>
/**
 * main - Prints all possible combinations
 * of single-digit numbers
 *
 * Return: always 0 (success)
*/

int main(void)
{
	int u;

	for (u = 0; u <= 9; u++)

	{
		putchar((u % 10) + '0');
		if (u == 9)
			continue;
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
