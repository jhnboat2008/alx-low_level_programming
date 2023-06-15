#include <stdio.h>

/**
 * main - Entry point
 * return: Always (0) to mean success
 */

int main(void)
{
	printf("Size of a char: %zu bytes\n", sizeof(char));
	printf("Size of an int: %zu bytes\n", sizeof(int));
	printf("Size of a long int: %zu bytes\n", sizeof(long int));
	printf("Size of a long long int: %zn bytes\n", sizeof(long long int));
	printf("Size of a float: %zn bytes\n", sizeof(float));
	
	return 0;
}
