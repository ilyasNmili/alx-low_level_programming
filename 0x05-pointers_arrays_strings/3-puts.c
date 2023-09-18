#include "main.h"

/**
 * _puts -  take char pointer
 * Return: void
 * @str: string
 */

void _puts(char *str)
{
	while (*str)
	{
		putchar(*str);
		str++;
	}
}
