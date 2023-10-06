#include "main.h"
#include <stdlib.h>

/**
 * _calloc - calloc
 * Return: void
 * @nmemb: integer
 * @size: integer
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i = 0;
	unsigned int new_size = nmemb * size;

	p = malloc(new_size);
	if (!p)
		return (NULL);
	while (i < new_size)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
