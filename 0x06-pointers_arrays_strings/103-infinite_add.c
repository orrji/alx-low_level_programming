#include "main.h"

/**
 * infinite_add - Adds two numbers
 * @n1: Number parameter 1
 * @n2: Number parameter 2
 * @r: buffer
 * @size_r: buffer size
 * Return: sum
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i1, i2, i3, i4, i5, i6;

	for (i1 = 0; n1[i1]; i1++)
		;
	for (i2 = 0; n2[i2]; i2++)
		;
	if (i1 > size_r || i2 > size_r)
		return (0);
	i5 = 0;
	for (i1 -= 1, i2 -= 1, i3 < size_r - 1; i1--, i2--, i3++)
	{
		i6 = i5;
		if (i1 >= 0)
			i6 += n1[i1] - '0';
		if (i2 >= 0)
			i6 += n2[i2] - '0';
		if (i1 < 0 && i2 < 0 && i6 == 0)
		{
			break;
		}
		i5 = i6 / 10;
		r[i3] = i6 % 10 + '0';
	}
	r[i3] = '\0';
	if (i1 >= 0 || i2 >= 0 || i5)
		return (0);
	for (i3 -= 1, i4 = 0; i4 < i3; i3--, i4++)
	{
		i5 = r[i3];
		r[i3] = r[i4];
		r[i4] = i5;
	}
	return (r);
}
