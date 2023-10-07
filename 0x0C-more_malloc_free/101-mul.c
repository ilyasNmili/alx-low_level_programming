#include "main.h"
#include <stdlib.h>
#include <unistd.h>

/**
 * _atoi - str_to_int
 * Return: integer
 * @s: string
 */

int _atoi(char *s)
{
	int n = 0;
	int signe = 1;

	/**
	 * if (strcmp(s, "-2147483648") == 0)
	 * return (-2147483648);
	*/

	while (*s && (*s < '0' || *s > '9'))
	{
		if (*s == '-')
			signe *= -1;
		s++;
	}
	while (*s && *s >= '0' && *s <= '9')
	{	n = n * 10 + (*s - '0');
		s++;
	}
	return (signe * n);
}

/**
 * print_number - takes number and print it
 * Return: void
 * @n: number
 */

void print_number(int n)
{
	if (n == -2147483648)
	{
		_putchar('-');
		_putchar('2');
		print_number(147483648);
		return;
	}

	if (n < 0)
	{
		_putchar('-');
		print_number(-n);
	}
	if (n >= 0 && n <= 9)
		_putchar('0' + n);
	if (n > 9)
	{
		print_number(n / 10);
		_putchar('0' + n % 10);
	}
}
/**
 * is_digit - is_digit
 * Return: bool
 * @str: str
*/
int is_digit(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] > '9' || str[i] < '0')
			return (0);
		i++;
	}
	return (1);
}

/**
 * main - somme
 * Return: 0 in Success
 * @ac: argc
 * @av: argv
 */

int main(int ac, char **av)
{
	if (ac != 3 || !is_digit(av[1]) || !is_digit(av[2]))
	{
		write(1, "Error\n", 7);
		exit(98);
	}
	print_number(_atoi(av[1]) + _atoi(av[2]));
	_putchar('\n');
	return (0);
}
