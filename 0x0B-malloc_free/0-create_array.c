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
	unsigned int i = 0;
	char *str;

	if (size == 0)
		return (0);
	str = (char *)malloc(size * sizeof(char));
	if (!str)
		return (0);
	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);

}
