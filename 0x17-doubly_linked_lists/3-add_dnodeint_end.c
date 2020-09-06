#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_dnodeint_end - function that adds a new node at the end of a
 * dlistint_t list.
 * @head: list header.
 * @n: integer.
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *last = NULL;
	int temp = n;

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = temp;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (NULL);
	}
	last = *head;
	while (last->next)
		last = last->next;
	last->next = new_node;
	new_node->prev = last;
	return (*(&new_node));
}
