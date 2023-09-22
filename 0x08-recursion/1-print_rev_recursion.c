#include "main.h"

/**
 *_print_rev_recursion - print_reverse
 *Return: void
 *@s: string
 */

void _print_rev_recursion(char *s)
{
	if (*(s + 1))
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	else if (*s)
		_putchar(*s);
}
