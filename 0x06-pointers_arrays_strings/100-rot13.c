#include "main.h"

/**
 * rot13 - Encodes a string using rot13
 * @s: string parameter
 * Return: Encoded string
 */

char *rot13(char *)
{
	int i1, i2;
	char c1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char c2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i1 = 0; *(s + i1); i1++)
	{
		for (i2 = 0; i2 < 52; i2++)
		{
			if (c1[i2] == *(s + i1))
			{
				*(s + i1) = c2[i2];
				break;
			}
		}
	}
	return (s);
}
