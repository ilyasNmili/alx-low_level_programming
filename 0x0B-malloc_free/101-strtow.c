#include "main.h"
#include <stdlib.h>

/**
 * words_number - number
 * Return: integer
 * @str: string
*/
int words_number(char *str)
{
	int i = 0;
	int n = 0;

	while (str[i])
	{
		n++;
		while (str[i] && str[i] == ' ')
			i++;
		while (str[i] && str[i] != ' ')
			i++;
	}
	return (n);
}
/**
 * _size - size
 * Return: int
 * @str: string
*/
int _size(char *str)
{
	int size = 0;

	while (str[size] && str[size] != ' ')
		size++;
	return (size);
}

/**
 * strtow - string to arraystring
 * Return: string
 * @str: string
*/
char **strtow(char *str)
{
	int words_n = words_number(str);
	char **ret;
	int i = 0;
	int x = 0;
	int y = 0;
	int size;

	if (str == NULL || !(*str))
		return (NULL);
	ret = (char **)malloc((words_n + 1) * sizeof(char *));
	if (!ret)
		return (NULL);
	while (str[i])
	{
		while (str[i] == ' ')
			i++;
		if (str[i] && str[i] != ' ')
		{
			y = 0;
			size = _size(str + i);
			ret[x] = (char *)malloc(size * sizeof(char) + 1);
			if (!ret[x])
				return (NULL);
			while (y < size)
			{
				ret[x][y] = *(str + i);
				y++;
				i++;
			}
		}
		x++;
	}
	ret[x] = NULL;
	return (ret);
}
