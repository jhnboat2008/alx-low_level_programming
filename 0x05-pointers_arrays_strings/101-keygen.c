#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords
 * for program 101-crackme
 * Return: 0 (success)
*/

int main(void)
{
	char pswd[84];
	int index = 0, sum = 0, half1, half2;

	srand(time(0));

	while (sum < 2772)
	{
		pswd[index] = 33 + rand() % 94;
		sum += pswd[index++];
	}

	pswd[index] = '\0';

	if (sum != 2772)
	{
		half1 = (sum - 2772) / 2;
		half2 = (sum - 2772) / 2;
		if ((sum - 2772) % 2 != 0)
			half1++;

		for (index = 0; pswd[index]; index++)
		{
			if (pswd[index] >= (33 + half1))
			{
				pswd[index] -= half1;
				break;
			}
		}
		for (index = 0; pswd[index]; index++)
		{
			if (pswd[index] >= (33 + half2))
			{
				pswd[index] -= half2;
				break;
			}
		}
	}
	printf("%s", pswd);
	return (0);
}
