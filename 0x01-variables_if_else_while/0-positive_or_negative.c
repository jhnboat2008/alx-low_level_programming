#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/* main - prints a random number, n each time the is executed 
 * Random: Always 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	
	/* prints n if it is greater than 0 */
	if (n > 0) {
	printf("%d is positive\n", n);
	}

	/* print n if  less than 0 */
	else if (n < 0) {
	printf("%d is negative\n", n);
	}

	/* prints n if it is 0 */
	else
	printf("%d is zero\n", n);

	return (0);
}
