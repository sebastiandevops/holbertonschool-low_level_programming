#include "lists.h"
/**
 * delete_dnodeint_at_index - function that deletes the node at index
 * of a dlistint_t linked list.
 * @head: list header.
 * @index: index to delete the node.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	dlistint_t *next;
	unsigned int count = 0;

	while (current != NULL)
	{
		next = current->next;
		if (index == count)
		{
			free(current->prev);
			return (1);
		}
		current = next;
		count++;
	}
	return (-1);
}
