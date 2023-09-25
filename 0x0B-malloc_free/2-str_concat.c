#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - concatenete two strings
 * Return: char pointer
 * @s1: string
 * @s2: string
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int size1 = 0;
	unsigned int size2 = 0;
	unsigned int total_size;
	unsigned int i = 0;
	char *str;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1)
		while (s1[size1])
			size1++;
	if (s2)
		while (s2 && s2[size2] != '\0')
			size2++;
	total_size = size1 + size2;
	str = (char *)malloc(total_size * sizeof(char) + 1);
	if (!str)
		return (NULL);
	for (i = 0; i < size1 ; i++)
		str[i] = s1[i];
	for (i = size1; i < total_size; i++)
		str[i] = s2[i - size1];
	str[i] = '\0';
	return (str);
}
