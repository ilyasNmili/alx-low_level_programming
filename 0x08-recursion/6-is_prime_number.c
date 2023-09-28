#include "main.h"

/*
 * is_prime_number - prime
 * Return : bool
 * @n: integer
 */

int is_prime_number(int n)
{
	int i = 2;

	if (n < 2)
		return (0);
	while (i * i <= n)
	{
		if (i * i == n)
			return (0);
		i++;
	}
	return (1);
}
