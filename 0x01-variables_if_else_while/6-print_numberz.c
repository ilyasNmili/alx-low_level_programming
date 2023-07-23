#include <stdio.h>

/**
 * main - print 0123456789
 * return 0 in success
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar ('0' + i);
	}
	putchar ('\n');
	return (0);
}
