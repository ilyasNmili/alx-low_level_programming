#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - print_numbers
 * Return: void
 * @separator: char
 * @n: int
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list vf;
	unsigned int i;

	va_start(vf, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(vf, unsigned int));
		if (separator && i != n - 1)
			printf("%s", separator);
	}
	va_end(vf);
	printf("\n");
}
