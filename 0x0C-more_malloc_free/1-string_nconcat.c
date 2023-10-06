#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenate
 * Return: string
 * @s1: string
 * @s2: string
 * @n: integer
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size1 = 0;
	unsigned int size2 = 0;
	unsigned int total_size;
	char *ret;
	unsigned int i = 0;

	while (s1 && s1[size1])
		size1++;
	while (s2 && s2[size2])
		size2++;
	if (size2 > n)
		total_size = size1 + n;
	else
		total_size = size2 + size1;
	ret = (char *)malloc(total_size * sizeof(char) + 1);
	if (!ret)
		return (NULL);
	for (i = 0; i < size1 ; i++)
		ret[i] = s1[i];
	for (i = size1; i < total_size ; i++)
		ret[i] = s2[i - size1];
	ret[i] = '\0';
	return (ret);
}
