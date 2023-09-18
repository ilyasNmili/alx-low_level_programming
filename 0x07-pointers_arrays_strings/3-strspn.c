#include "main.h"
#include <string.h>

/**
 * is_in - return bool
 * Return: bool
 * @s: string
 * @c: char
 */

int is_in(char *s, char c)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

/**
  * _strspn - return unsigned int
  * Return: unsigned int
  * @s: string
  * @accept: string
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;

	while (*s)
	{
		if (is_in(accept, *s))
		{
			n++;
		}
		else
			break;
	s++;
	}
	return (n);
}
