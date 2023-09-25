#include "main.h"
#include <stdlib.h>

/**
 * create_array - create dynamique array
 * Return: char pointer
 * @size: int
 * @c: char
 */

char *create_array(unsigned int size, char c)
{
	char *str = (char *)malloc(size * sizeof(char) + 1);
	int i = 0;

	for (i = 0; i < size; i++)
		str[i] = c;
	str[i] = '\0';
	return (str);
}
