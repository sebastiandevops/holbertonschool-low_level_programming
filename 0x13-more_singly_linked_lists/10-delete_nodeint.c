#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes the node at index.
 * of a linked list.
 * @head: list header.
 * @index: index to delete the node.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *next;
	unsigned int count = 0;

	index = 0;
	while (current != NULL)
	{
		next = current->next;
		if (index == count)
		{
			free(current);
			return (1);
		}
		current = next;
		count++;
	}
	return (-1);
}
