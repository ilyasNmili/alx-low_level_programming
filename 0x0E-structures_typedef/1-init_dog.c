#include "dog.h"
#include <string.h>
/**
 * init_dog - initialising struct
 * @d: dog
 * @name:  name
 * @age:   age
 * @owner: owner
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age,
	d->owner, owner;

}