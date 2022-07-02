#include <stdio.h>

/**
 * main - Program to print lowercase alphabets except q and e
 *
 * Return: Always 0 (Success!)
 */

int main()
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'q' && c != 'e')
		putchar(c);
	}
	putchar ('\n');
	return (0);
}
