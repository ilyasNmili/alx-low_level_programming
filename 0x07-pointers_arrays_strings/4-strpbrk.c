#include "main.h"

/**
 * _strpbrk - return pointer
 * Return: char pointer
 * @s: string
 * @accept: string
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j;

	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
				return (s + i);
			j++;
		}
		i++;
	}
	return (0);
}
