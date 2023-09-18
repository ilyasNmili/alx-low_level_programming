#include "main.h"
#include <stdio.h>

/**
 * rev_string -  take char pointer
 * @s: string
 */

void rev_string(char *s)
{
	int size = 0;

	while (s[size])
		size++;
	while (--size >= 0)
	{
		putchar(s[size]);
	}
	putchar('\n');
}

