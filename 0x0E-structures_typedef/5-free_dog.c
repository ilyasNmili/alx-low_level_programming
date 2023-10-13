#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dog
 * Return: void
 * @d: dog structure
*/
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
