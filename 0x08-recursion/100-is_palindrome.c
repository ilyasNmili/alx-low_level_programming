#include "main.h"

/**
 * _size - check code
 * Return: integer
 * @s: string
 */

int _size(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _size(s + 1));
}

/**
 * is_the_same - check code
 * Return: bool
 * @s: string
 * @i: start
 * @n: end
 */

int is_the_same(char *s, int i, int n)
{
	if (i >= n)
		return (1);
	if (*(s + i) != *(s + n))
		return (0);
	return (is_the_same(s, i + 1, n - 1));
}

/**
 * is_palindrome - check code
 * Return: bool
 * @s: string
 */


int is_palindrome(char *s)
{
	int size = _size(s);

	if (size <= 1)
		return (1);
	return (is_the_same(s, 0, size - 1));
}
