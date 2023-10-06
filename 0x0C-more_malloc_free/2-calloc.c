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
	void *p;

	p = malloc(nmemb * size);
	if (!p)
		return (NULL);
	return (p);
}
