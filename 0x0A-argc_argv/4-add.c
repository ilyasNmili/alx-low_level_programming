#include <stdio.h>
#include <stdlib.h>

/**
 * is_number - is_number
 * Return: bool
 * @s: string
 */

int is_number(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (!(s[i] >= '0' && s[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

/**
 * main - add.c
 * Return: integer
 * @ac: argc
 * @av: argv
 */

int main(int ac, char **av)
{
	int s = 0;

	while (--ac > 0)
	{
		if (!is_number(av[ac]))
		{
			printf("Error\n");
			return (1);
		}
		s += atoi(av[ac]);
	}
	printf("%d\n", s);
	return (0);
}
