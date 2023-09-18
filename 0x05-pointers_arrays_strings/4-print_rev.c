#include "main.h"
#include <stdio.h>

/**
 * print_rev -  take char pointer
 * @s: string
 */

void print_rev(char *s)
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
