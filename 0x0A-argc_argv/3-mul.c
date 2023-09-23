#include "stdio.h"
#include <stdlib.h>

/**
 * main - print mult
 * Return: 0 in Success
 * @ac: argc
 * @av: argv
 */

int main(int ac, char **av)
{
	if (ac == 3)
	{
		printf("%d\n", atoi(av[1]) * atoi(av[2]));
		return (0);
	}
	printf("Error\n");
	return (1);
}
