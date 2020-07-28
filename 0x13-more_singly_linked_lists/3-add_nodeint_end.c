#include "lists.h"
/**
 * add_nodeint_end - function that adds a new node at the end of a linked list.
 * @head: list header.
 * @n: integer.
 *
 * Return: integer.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/* 1. allocate node */
	listint_t *new_node = (listint_t *) malloc(sizeof(listint_t));
	listint_t *last = *head;

	/* 2. put in the data  */
	new_node->n = n;

	/* 3. This new node is going to be the last node, so make next*/
	/*of it as NULL*/
	new_node->next = NULL;

	/* 4. If the Linked List is empty, then make the new node as head */
	if (*head == NULL)
	{
		*head = new_node;
		return (NULL);
	}
	/* 5. Else traverse till the last node */
	while (last->next != NULL)
		last = last->next;

	/* 6. Change the next of last node */
	last->next = new_node;
	return ((listint_t *) last);
}
