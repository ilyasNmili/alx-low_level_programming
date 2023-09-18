#include <stdio.h>

/**
 * main - print_comb3
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	int j;

	while (i <= 8)
	{
		j = i + 1;
		while (j <= 9)
		{
			putchar('0' + i);
			putchar('0' + j);
			if (i != 8 || j != 9)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
