#include "main.h"

/**
 * _strstr - Locates a substring
 * @haystack: string to find from
 * @needle: string to find
 * Return: Pointer to beginning of needle of null
 */

char *_strstr(char *haystack, char *needle)
{
	usigned int i1 = 0, i2 = 0;

	while (haystack[i1])
	{
		while (needle[i2] && (haystack[i1] == needle[0]))
		{
			if (haystack[i1 + i2] == needle[i2])
				i2++;
			else
				break;
		}
		if (needle[i2])
		{
			i1++;
			i2 = 0;
		}
		else
			return (haystack + i1);
	}
	return (0);
}
