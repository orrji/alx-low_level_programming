#include <stdio.h>

/**
 * main - Program to print numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success!)
 */

int main(void)
{
	char n;
	char a;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
