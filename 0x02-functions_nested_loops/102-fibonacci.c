#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers,
 * starting with 1 and 2, followed by a new line
 *
 * Return: alwys 0 (success)
*/

int main(void)
{
	int n;
	unsigned long fib1 = 0, fib2 = 1, sum;

	for (n = 0; n < 50; n++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (n == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}

