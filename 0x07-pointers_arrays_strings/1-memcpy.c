#include "main.h"

/**
 * _memcpy - check code
 * Return: char pointer
 * @dest: destination
 * @src: source
 * @n: unsigned int
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
