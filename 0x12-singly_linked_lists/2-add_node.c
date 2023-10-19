#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node - add node
 * Return: list
 * @head: list
 * @str: string
*/


list_t *add_node(list_t **head, const char *str)
{
	unsigned int size = 0;
	list_t *newNode;

	/**if (!str || !head)
		return (NULL);*//
	newNode = malloc(sizeof(list_t));
	if (!newNode)
		return (NULL);

	newNode->str = strdup(str);
	if (!newNode->str)
		return (NULL);
	while (str[size])
		size++;
	newNode->len = size;
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
