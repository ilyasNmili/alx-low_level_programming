#include "main.h"
#include <stdlib.h>

/**
 * _realloc - check code
 * Return: void
 * @ptr: void pointer
 * @old_size: unsigned int
 * @new_size: unsigned int
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ret;
	char *ancien_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	ret = malloc(new_size);
	if (!ret)
		return (NULL);
	ancien_ptr = ptr;
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			ret[i] = ancien_ptr[i];
	}
	else
	{
		for (i = 0; i < new_size; i++)
			ret[i] = ancien_ptr[i];
	}
	free(ptr);
	return (ret);
}
