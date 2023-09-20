#include "main.h"

/**
 * print_number - takes number and print it
 * Return: void
 * @n: number
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		print_number(-n);
	}
	if (n >= 0 && n <= 9)
		_putchar('0' + n);
	if (n > 9)
	{
		print_number(n / 10);
		_putchar('0' + n % 10);
	}
}
