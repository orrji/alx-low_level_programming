#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random passwords
 *
 * Return: o
 */

int main(void)
{
	int r = 0, x = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (c < 2772)
	{
		r = rand() % 128;
		if ((x + r) > 2772)
		break;
		x = x + r;
		printf("%c\n", r);
	}
	printf("%c\n", (2772 - x));
	return (0);
}
