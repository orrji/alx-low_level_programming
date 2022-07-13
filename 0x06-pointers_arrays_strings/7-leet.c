#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @s: string parameter
 * Return: Encoded integer
 */

char *leet(char *s)
{
	int i1, i2;
	char c1[] = "aAeEoOtTlL";
	char c2[] = "4433007711";

	for (i1 = 0; *(s + i1); i1++)
	{
		for (i2 = 0; i2 <= 9; i2++)
		{
			if (c1[i2] == *(s + i1))
				*(s + i1) = c2[i2];
		}
	}
	return (s);
}
