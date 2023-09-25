#include "main.h"
#include "stdlib.h"

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
