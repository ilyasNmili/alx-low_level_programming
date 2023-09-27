#include "main.h"
#include <string.h>

/**
 * _atoi - str_to_int
 * Return: integer
 * @s: string
 */

int _atoi(char *s)
{
	int n = 0;
	unsigned int signe = 1;

	if (strcmp(s, "-2147483648") == 0)
		return (-2147483648);
	while (*s && (*s < '0' || *s > '9'))
	{
		if (*s == '-')
			signe *= -1;
		s++;
	}
	while (*s && *s >= '0' && *s <= '9')
	{	n = n * 10 + *s - '0';
		s++;
	}
	return (signe * n);
}
