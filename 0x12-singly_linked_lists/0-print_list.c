#include "lists.h"
#include <stdio.h>

/**
 * print_list - print_list
 * Return: number of nodes
 * @h: list
*/

size_t print_list(const list_t *h)
{
	size_t size = 0;
	int i = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			while (h->str[i])
				i++;
			printf("[%u] %s\n", i, h->str);
		}
		else
			printf("[0] (nil)\n");
		h = h->next;
		size++;
	}
	return (size);
}
