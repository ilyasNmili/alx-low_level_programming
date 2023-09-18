#include "main.h"
#include <stdio.h>

/**
 * puts_half - takes string
 * Return: void
 * @str: string
 */
void puts_half(char *str)
{
	int size;

	while (str[size])
		size++;
	str += size / 2;

	while (*str)
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
