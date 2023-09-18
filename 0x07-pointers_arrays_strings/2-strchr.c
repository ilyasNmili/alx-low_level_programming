#include "main.h"
#include <stdio.h>

/**
 * _strchr - return string
 * Return: char pointer
 * @s: char pointer
 * @c: char
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
