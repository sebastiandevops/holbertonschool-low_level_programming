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
	/* 1. allocate node */
	listint_t *new_node = (listint_t *) malloc(sizeof(listint_t));

	/* 2. put in the data  */
	new_node->n = n;

	/* 3. Make next of new node as head */
	new_node->next = (*head);

	/* 4. move the head to point to the new node */
	(*head) = new_node;
	return ((listint_t *) head);
}
