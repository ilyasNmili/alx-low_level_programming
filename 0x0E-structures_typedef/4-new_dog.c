#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strcpy - copy string
 * Return: char pointer
 * @dest: destination
 * @src: source
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * _size - size
 * Return: int
 * @str: string
*/

int _size(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
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
	if (!dog)
		return (NULL);
	dog->name = malloc(sizeof(char) * (_size(name) + 1));
	if (!dog->name)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (_size(owner) + 1));
	if (!dog->owner)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	dog->age = age;
	_strcpy(dog->owner, owner);
	return (dog);
}
