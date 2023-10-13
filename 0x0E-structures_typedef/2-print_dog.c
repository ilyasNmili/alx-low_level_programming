#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print dog
 * @d: dog
*/
void print_dog(struct dog *d)
{
	if (!d)
		return;
	if (!d->name)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	if (!d->owner)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);

}
/**
* if (!d->name)
* d->name = "(nil)";
* if (!d->owner)
* d->owner = "(nil)";
* printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
*/
