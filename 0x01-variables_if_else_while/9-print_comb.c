#include <stdio.h>

/**
 * main - print_comb
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		putchar('0' + i);
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	return (0);
}
