#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_dnodeint - function that adds a new node at the beginning
 * of a dlistint_t list.
 * @head: list header.
 * @n: integer.
 * Return: new node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = (dlistint_t *) malloc(sizeof(dlistint_t));

	new_node->n = n;
	new_node->next = (*head);
	(*head) = new_node;
	return ((dlistint_t *) head);
}
