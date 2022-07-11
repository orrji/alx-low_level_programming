#include "main.h"

/**
 * rev_string - Prints string in reverse
 * @s: string parameter
 * Return: void
 */

void rev_string(char *s)
{
	char tmp;
	int a, len1, len2;

	len1 = 0;
	len2 = 0;

	while (s[len1] != '\0')
		len1++;

	len2 = len1 - 1;
	for (a = 0; a < len1 / 2; a++)
	{
		tmp = s[a];
		s[a] = s[len2];
		s[len2] = tmp;
		len2 -= 1;
	}
}
