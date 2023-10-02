#include "main.h"

/**
 * _strcpy - copy string
 * Return: char pointer
 * @dest: destination
 * @src: source
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
