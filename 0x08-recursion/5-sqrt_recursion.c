#include "main.h"

/**
 * _sqrt - sqrt
 * Return: int
 * @n : integer
 * @i: integer
 */

int _sqrt(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - sqrt
 * Return: int
 * @n : integer
 */

int _sqrt_recursion(int n)
{
	if (n < 1)
		return (-1);
	return (_sqrt(n, 0));
}
