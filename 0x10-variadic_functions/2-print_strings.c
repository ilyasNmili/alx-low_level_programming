#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - print_strings
 * Return: void
 * @separator: string
 * @n: integer
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list vf;
	unsigned int i;
	char *str;

	va_start(vf, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(vf, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (separator && i != n - 1)
			printf("%s", separator);
	}
	va_end(vf);
	printf("\n");
}
