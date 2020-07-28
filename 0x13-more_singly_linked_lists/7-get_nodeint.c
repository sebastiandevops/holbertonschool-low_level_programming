#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node of a linked list.
 * if the linked list is empty return 0
 * @head: list header.
 * @index: nth node to return.
 * Return: if the node does not exist, return NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
			return (head);
		head = head->next;
		count++;
	}
	return (NULL);
}
