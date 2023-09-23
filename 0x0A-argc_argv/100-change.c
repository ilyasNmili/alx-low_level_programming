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

	while (n > 0)
	{
		if (n % 100 == 0)
		{
			coins *= 4;
			n /= 100;
		}
		else if (n >= 25)
		{
			coins += 1;
			n -= 25;
		}
		else if (n >= 10)
		{
			coins += 1;
			n -= 10;
		}
		else if (n >= 5)
		{
			coins += 1;
			n -= 5;
		}
		else if (n >= 2)
		{
			coins += 1;
			n -= 2;
		}
		else if (n == 1)
		{
			coins += 1;
			n -= 1;
		}
	}
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
