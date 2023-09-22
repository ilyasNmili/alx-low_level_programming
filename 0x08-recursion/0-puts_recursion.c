#include "main.h"

/**
 *_puts_recursion - putchar
 *Return: void
 *@s: string
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
