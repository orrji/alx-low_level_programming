#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int i1, i2, i3;

	if (argc != 3)
	{
		puts("Error");
		return (1);
	}
	i1 = atoi(argv[1]);
	i2 = atoi(argv[2]);
	i3 = i1 * i2;
	printf("%d\n", i3);
	return (0);
}
