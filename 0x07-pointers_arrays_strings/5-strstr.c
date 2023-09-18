#include "main.h"

/**
 * _strstr - return string
 * Return: string
 * @haystack: string
 * @needle: string to find
 */

char	_strstr(char *haystack, char *needle)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (needle[0] == '\0')
		return (haystack);
	while (haystack[i] != '\0')
	{
		j = 0;
		while (haystack[i + j] == needle[j])
		{
			if (needle[j + 1] == '\0')
				return (haystack + i);
			j++;
		}
		i++;
	}
	return (0);
}
