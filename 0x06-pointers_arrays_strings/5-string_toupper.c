#include "main.h"

/**
 * string_toupper - converts lowercase to uppercase
 * @s: string parameter
 * Return: string
 */

char *string_toupper(char *s)
{
	int v1 = 0;

	while (*(s + v1))
	{
		if (*(s + v1) >= 'a' && *(s + v1) <= 'z')
			*(s + v1) -= 'a' - 'A';
		v1++;
	}
	return (s);
}
