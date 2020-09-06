#include "lists.h"
/**
 * dlistint_len - function that returns the number of elements in a
 * linked dlistint_t list.
 * @h: list header.
 *
 * Return: number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
