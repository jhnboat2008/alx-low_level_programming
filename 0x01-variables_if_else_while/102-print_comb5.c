#include <stdio.h>
/**
 * main - Prints all possible combinations of
 * two two-digit numbers ranging from 0 to 99
 * with the two numbers separated by a space.
 * All numbers should be in two digits with a
 * comma separating every two numbers
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int n1, n2;

	{
		for (n1 = 0; n1 < 100; n1++)
	{
		for (n2 = 0; n2 < 100; n2++)
		{
			if (n1 < n2)
		{	putchar((n1 / 10) + 48);
			putchar((n1 % 10) + 48);
			putchar(' ');
			putchar((n2 / 10) + 48);
			putchar((n2 % 10) + 48);
			if (n1 != 98 || n2 != 99)
		{
			putchar(',');
			putchar(' ');
		}
		}
		}
	}
	}
	putchar('\n');
	return (0);
}
