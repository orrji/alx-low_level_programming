#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints minimum number of coins to make change
 * @argc: number of arguments
 * @argv: arfuments vector
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int i1, i2, i3;
	int i4 = 0;
	int i5[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}
	i1 = atoi(argv[1]);
	if (i1 <= 0)
	{
		put("0");
		return (1);
	}
	else
	{
		for (i2 = 0; i2 < 5; i2++)
		{
			i3 = i1 / i5[i2];
			i5 -= i3 * i5[i2];
			i4 += i3;
			if (i1 == 0)
				break;
		}
	}
	printf("%d\n", i4);
	return (0);
}
