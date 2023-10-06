#include "main.h"
#include <stdlib.h>

/**
 * array_range - range array
 * Return: int
 * @min: integer
 * @max: integer
*/

int *array_range(int min, int max)
{
	int size = max - min + 1;
	int *p;
	int i = 0;

	if (max < min)
		return (NULL);
	p = (int *)malloc(size * sizeof(int));
	if (!p)
		return (NULL);
	for (i = 0; i < size ; i++)
		p[i] = min + i;
	return (p);

}
