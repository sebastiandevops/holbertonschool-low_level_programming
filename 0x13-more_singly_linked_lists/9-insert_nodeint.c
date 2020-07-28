#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * of a linked list.
 * @head: list header.
 * @idx: index to insert the node.
 * @n: integer to insert.
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode = (listint_t *)malloc(sizeof(listint_t));

	newNode->n = n;
	if (*head == NULL)
		return (newNode);
	if (idx == 0)
	{
		newNode->next = *head;
		return (newNode);
	}
	listint_t *currentNode = *head;

	while ((idx - 1) > 0)
	{
		currentNode = currentNode->next;
		idx--;
	}
	newNode->next = currentNode->next;
	currentNode->next = newNode;
	return (*head);
}
