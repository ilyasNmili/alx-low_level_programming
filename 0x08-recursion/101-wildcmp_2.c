#include "main.h"
/**
 * wildcmp - compare two strings
 * Return: bool
 * @s1: str1
 * @s2: str2
 */

int wildcmp(char *s1, char *s2)
{
	if (!(*s1) && !s2)
		return (1);
	if (*s2 == '*' && *(s2 + 1)  && !(*s1))
		return (0);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	return (0);
}
