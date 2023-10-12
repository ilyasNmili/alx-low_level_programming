#include "function_pointers.h"

/**
 * print_name - print name
 * @name: char pointer
 * @f:function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
