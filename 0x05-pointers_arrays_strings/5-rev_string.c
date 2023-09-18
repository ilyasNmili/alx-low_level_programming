#include "main.h"
#include <stdio.h>

/**
 * rev_string -  take char pointer
 * @s: string
 */

void rev_string(char *s)
{
	int size = 0;
	int i = 0;

	while (s[size])
		size++;
	while (i < size / 2)
	{
		s[i] = s[size - i - 1];
		i++;
	}
	putchar('\n');
}

