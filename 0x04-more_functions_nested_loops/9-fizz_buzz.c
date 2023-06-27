#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, followed by a new
 * line. For multiples of 3 print Fizz instead of the number
 * and for the multiples of 5 print Buzz. For numbers which
 * are multiples of bothe 3 and 5 print FizzBuzz
 * Return: always 0
*/

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 15 == 0)
			printf("FizzBuzz");
		else if (n % 3 == 0)
			printf("Fizz");
		else if (n % 5 == 0)
			printf("Buzz");
		else
			printf("%n", n)
		if (n < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
