#include "main.h"
#include <stdlib.h>
#include <unistd.h>

/**
 * _atoi - str_to_int
 * Return: integer
 * @s: string
 */

unsigned int _atoi(char *s)
{
	unsigned int n = 0;
	unsigned int i = 0;

	while (s[i])
	{	n = n * 10 + (s[i] - '0');
		i++;
	}
	return (n);
}
/**
 * number_size - size
 * Return: int
 * @n: number
*/
unsigned int  number_size(unsigned int n)
{
	unsigned int i = 0;
	unsigned int tmp = n;

	while (tmp != 0)
	{
		i++;
		tmp /= 10;
	}
	return (i);
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
 * _strdup - string cpy with malloc
 * Return: char pointer
 * @str: string
 */


char *_strdup(char *str)
{
	unsigned int size = 0;
	unsigned int i = 0;
	char *cpy;

	if (str == NULL)
		return (NULL);
	while (str[size])
		size++;
	cpy = (char *)malloc(size * sizeof(char) + 1);
	if (!cpy)
		return (NULL);
	while (i < size)
	{
		cpy[i] = str[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

/**
 * _itoa - int to str
 * Return: str
 * @number: int
*/
char *_itoa(int number)
{
	int numDigits = (number == 0) ? 1 : 0;
	int temp = number;
	char *result;
	int index;

	while (temp != 0)
	{
		temp /= 10;
		numDigits++;
	}
	result = (char *)malloc(numDigits + 1);
	index = numDigits;
	result[index] = '\0';
	while (number != 0)
	{
		index--;
		result[index] = (number % 10) + '0';
		number /= 10;
	}

	return (result);
}
/**
 * main - somme
 * Return: 0 in Success
 * @ac: argc
 * @av: argv
 */

int main(int ac, char **av)
{
	unsigned int n;
	char *str;
	int i = 0;

	if (ac != 3 || !is_digit(av[1]) || !is_digit(av[2]))
	{
		write(1, "Error\n", 7);
		exit(98);
	}
	n = _atoi(av[1]) + _atoi(av[2]);
	str = _strdup(_itoa(n));
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
	free(str);
	return (0);
}
