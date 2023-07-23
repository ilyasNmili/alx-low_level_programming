#include <stdio.h>

/**
 * main - print 0123456789
 * Return: always  0 (success)
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar ('0' + i);
		i++;
	}
	putchar ('\n');
	return (0);
}
