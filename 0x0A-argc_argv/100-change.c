#include <stdio.h>
#include <stdlib.h>

/**
 * change_cent - function to calculate coins number
 * Return: int
 * @n: integer
 */
int change_cent(int n)
{
	int coins = 0;

	if (n <= 0)
		return (0);
	if (n >= 25)
		coins += 1 +  change_cent(n - 25);
	else if (n >= 10)
		coins += 1 + change_cent(n - 10);
	else if (n >= 5)
		coins += 1 + change_cent(n - 5);
	else if (n >= 2)
		coins += 1 + change_cent(n - 2);
	else if (n > 0)
		coins += 1 + change_cent(n - 1);
	return (coins);
}

/**
 * main - main
 * Return: 0 in Success
 * @ac: argc
 * @av: argv
 */

int main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("%d\n", change_cent(atoi(av[1])));
		return (0);
	}
	printf("Error\n");
	return (1);
}
