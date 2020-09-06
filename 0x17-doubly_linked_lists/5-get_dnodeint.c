#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns the nth
 * node of a dlistint_t list.
 * if the linked list is empty return 0
 * @head: list header.
 * @index: nth node to return.
 * Return: if the node does not exist, return NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
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
