#include "main.h"

/**
 * leet - Write a function that encodes a string into 1337
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 * @s: string
 * Return: address of s
*/

char *leet(char *s)
{
	int a, b;
	char c[] = "aAeEoOtTlL";
	char d[] = "4433007711";

	for (a = 0; *(s + a); a++)
	{
		for (b = 0; b <= 9; b++)
		{
			if (c[b] == s[a])
				s[a] = d[b];
		}
	}
	return (s);
}
