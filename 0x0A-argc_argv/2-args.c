#include <stdio.h>

/**
 * main - print arguments
 * Return: 0 in Success
 * @ac: argc
 * @av: argv
 */

int main(int ac, char **av)
{
	int i = 0;

	while (i < ac)
	{
		printf("%s\n", av[i]);
		i++;
	}
	return (0);
}

