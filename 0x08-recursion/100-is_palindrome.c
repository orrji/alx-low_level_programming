#include "main.h"

/**
 * _strlen - return length of string
 * @str: string to check
 * Return: length of string
 */

int _strlen(char *str)
{
	if (*str == '\0')
		return (0);
	else
		return (1 + _strlen(str + 1));
}

/**
 * check_palindrome - checks if string is a palindrome
 * @l: left index
 * @r: right index
 * @p: potential palindrome
 * Return: 1 if palidrome or 0
 */

int check_palindrome(int l, int r, char *p)
{
	if (l >= r)
		return (1);
	else if (p[l] != p[r])
		return (0);
	else
		return (check_palindrome(l + r, r - 1, p));
}

/**
 * is_palindrome - states is a string is a palindrome
 * @s: string to check
 * Return: 1 if palindrome or 0
 */

int is_palindrome(char *s)
{
	int i;

	i = _strlen(s) - 1;
	return (check_palindrome(0, i, s));
}
