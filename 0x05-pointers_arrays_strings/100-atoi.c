#include "main.h"

/**
 * _atoi - Converts string to integer
 * @s: String parameter
 * Return: s integer
 */

int _atoi(char *s)
{
	int x = 0;
	unsigned int y = 0;
	int low = 1;
	int isi = 0;

	while (s[x])
	{
		if (s[x] == 45)
		{
			low *= -1;
		}

		while (s[x] >= 48 && s[x] <= 57)
		{
			isi = 1;
			y = (y * 10) + (s[x] - '0');
			x++;
		}

		if (isi == 1)
		{
			break;
		}
		x++;
	}

	y *= low;
	return (y);
}
