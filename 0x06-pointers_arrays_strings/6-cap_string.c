#include "main.h"

/**
 * cap_string - Capitalizes all words
 * @s: string parameter
 * Return: string
 */

char *cap_string(char *s)
{
	int v1 = 0, v2;
	char v3[] = " \t\n,;.!?\"(){}";

	while (*(s + v1))
	{
		if (*(s + v1) >= 'a' && *(s + v1) <= 'z')
		{
			if (v1 == 0)
				*(s + v1) -= 'a' - 'A';
			else
			{
				for (v2 = 0; v2 <= 12; v2++)
				{
					if (v3[v2] == *(s + v1 - 1))
						*(s + v1) -= 'a' - 'A';
				}
			}
		}
		v1++;
	}
	return (s);
}
