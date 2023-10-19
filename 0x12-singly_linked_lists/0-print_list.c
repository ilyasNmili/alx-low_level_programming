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
	const list_t *current;
	unsigned int size = 0;

	current = h;
	while (current != NULL)
	{
		if (current->str)
		{
			printf("[%d] ", current->len);
			printf("%s\n", current->str);
		}
		else
			printf("[0] (nil)\n");
		current = current->next;
		size++;
	}
	return (size);
}
