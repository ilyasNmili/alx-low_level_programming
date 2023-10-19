#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - print_list
 * Return: number of nodes
 * @h: list
*/

size_t print_list(const list_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		if (h->str)
		{
			printf("[%u] ", h->len);
			printf("%s\n", h->str);
		}
		else
			printf("[0] (nil)\n");
		h = h->next;
		size++;
	}
	return (size);
}
