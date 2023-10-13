#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - string cpy with malloc
 * Return: char pointer
 * @str: string
 */


char *_strdup(char *str)
{
	unsigned int size = 0;
	unsigned int i = 0;
	char *cpy;

	if (str == NULL)
		return (NULL);
	while (str[size])
		size++;
	cpy = (char *)malloc(size * sizeof(char) + 1);
	if (!cpy)
		return (NULL);
	while (i < size)
	{
		cpy[i] = str[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}
/**
 * new_dog - newdog
 * Return: dog struct
 * @name:name
 * @age:age
 * @owner:owner
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (!dog || !name || !owner)
		return (NULL);
	dog->owner = _strdup(owner);
	dog->name = _strdup(name);
	dog->age = age;
	return (dog);
}
