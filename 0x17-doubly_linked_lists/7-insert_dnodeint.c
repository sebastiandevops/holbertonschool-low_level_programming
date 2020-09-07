#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * of a linked list.
 * @h: list header.
 * @idx: index to insert the node.
 * @n: integer to insert.
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode = (dlistint_t *)malloc(sizeof(dlistint_t));
	dlistint_t *currentNode = *h;

	newNode->n = n;
	if (*h == NULL)
		return (NULL);
	if (idx == 0)
	{
		newNode->next = *h;
		return (newNode);
	}
	while ((idx - 1) > 0)
	{
		currentNode = currentNode->next;
		idx--;
	}
	newNode->next = currentNode->next;
	currentNode->next = newNode;
	return (*(&newNode));
}
