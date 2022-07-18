#include "main.h"

/**
 * _strspn - Gets length of prefix substring
 * @s: string to check
 * @accept: string to check against
 * Return: number of bytes in accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i1, i2;

	for (i1 = 0; s[i1]; i1++)
	{
		for (i2 = 0; accept[i2]; i2++)
		{
			if (s[i1] == accept[i2])
				break;
		}
		if (!accept[i2])
			break;
	}
	return (i1);
}
