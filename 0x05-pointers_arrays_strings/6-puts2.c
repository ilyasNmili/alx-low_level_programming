#include "main.h"
#include <stdio.h>

/**
 * puts2 - takes string
 * Return: void
 * @str: string
 */

void puts2(char *str)
{
	while (*str)
	{
		putchar(*str);
		if (*(str + 1))
			str += 2;
		else
			break;
	}
	putchar('\n');
}
