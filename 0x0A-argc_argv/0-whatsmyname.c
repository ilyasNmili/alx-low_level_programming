#include "main.h"

/**
 * main - program name
 * Return: 0 in Success
 *@ac: argc
 *@av: argv
 */

int main(int ac, char **av)
{
	while (*av[0] && ac != 0)
	{
		_putchar(*av[0]);
		av[0]++;
	}
	_putchar('\n');
	return (0);
}
