#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * add_node - function that adds a new node at the beginning of a linked list.
 * @head: list header.
 * @str: string.
 * Return: 0.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *temp = strdup(str);

	new_node = (list_t *) malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = temp;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
