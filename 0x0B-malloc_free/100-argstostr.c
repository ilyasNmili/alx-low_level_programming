#include "main.h"
#include <stdlib.h>

/**
 * _size - len
 * Return: int
 * @str: string
*/

char _size(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}
/**
 * argstostr - args to str
 * Return: string
 * @ac: argc
 * @av:argv
*/
char *argstostr(int ac, char **av)
{
	int total_size = 0;
	int i = 0;
	int j;
	char *ret;

	if (!ac && !av)
		return (NULL);
	while (i < ac)
	{
		total_size += _size(av[i]);
		total_size++;
		i++;
	}
	ret = (char *)malloc(total_size * sizeof(char));
	if (!ret)
		return (NULL);
		i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			*ret = av[i][j];
			ret++;
			j++;
		}
		*ret = '\n';
		ret++;
		i++;
	}
	ret[total_size] = '\0';
	return (ret - total_size);
}
