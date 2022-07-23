#include <stdio.h>

/**
 * main - Prints name of a program followed by a new line
 * @argc: array size
 * @argv: array containing compile argument
 * Return: 0
 */

int main(int argc __attribute__((unused)), char* argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
