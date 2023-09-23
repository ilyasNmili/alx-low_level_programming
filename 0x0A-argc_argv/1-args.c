#include "stdio.h"

/**
 * main - number of arguments
 * Return: 0 in Success
 * @ac: argc
 * @av: argv
 */
int main(int ac, char **av)
{
	if (**av)
		printf("%d\n", ac - 1);
	return (0);
}
