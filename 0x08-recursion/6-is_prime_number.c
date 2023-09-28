#include "main.h"

/**
 * is_divisor - divisor
 * Return: bool
 * @n: integer
 * @i: integer
 */

int is_divisor(int n, int i)
{
	if (i == n)
		return (0);
	if (n % i == 0)
		return (1);
	return (is_divisor(n, i + 1));
}

/**
 * is_prime_number - prime
 * Return: bool
 * @n: integer
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (!is_divisor(n, 2));
}
