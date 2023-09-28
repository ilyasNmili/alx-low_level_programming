#include "main.h"
#include <limits.h>
#define MAX INT_MAX
/**
 * _sqrt_recursion: Check code
 * Return: integer
 * @n: integer
 */

int _sqrt_recursion(int n)
{
	int i = 0;

	while (i * i <= n)
	{
		if (i * i < n)
			i++;
		else
			return (i);
	}
	return (-1);
}
