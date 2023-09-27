#include "main.h"

/**
 * _atoi - str_to_int
 * Return: integer
 * @s: string
 */

int _atoi(char *s)
{
	int n = 0;
	unsigned int signe = 1;

	while (*s < '0' || *s > '9')
	{
		if (*s == '-')
			signe *= -1;
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{	n = n * 10 + *s - '0';
		s++;
	}
	return (signe * n);
}
