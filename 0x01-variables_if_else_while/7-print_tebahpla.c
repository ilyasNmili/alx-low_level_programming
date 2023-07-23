#include <stdio.h>

/**
 * main - print z to a
 * Return: alwas  0 (success)
 */

int main(void)
{
	int n = 0;

	while (n < 26)
	{
		putchar('a' + n);
	}
	putchar('\n');
	return (0);
}
