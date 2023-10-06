#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - check code
 * Return: void
 * @b: integer
*/

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	return (p);
}
