#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a linked list.
 * @head: list header.
 * @n: integer.
 *
 * Return: integer.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = (listint_t *) malloc(sizeof(listint_t));

	new_node->n = n;
	new_node->next = (*head);
	(*head) = new_node;
	return ((listint_t *) head);
}
