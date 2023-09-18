#include "main.h"

/**
 * _strlen - take char pointer
 * Return: size
 * @s: string
 */

int _strlen(char *s)
{
	int size = 0;

	while (s[size])
		size++;
	return (size);
}
