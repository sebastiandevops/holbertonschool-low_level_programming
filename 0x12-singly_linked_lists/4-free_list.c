#include "lists.h"
#include <stdlib.h>
/**
 * free_list - function that frees a linked list.
 * @head: list header.
 *
 * Return: void.
 */
void free_list(list_t *head)
{
	list_t *n = head;

	while (n)
	{
		list_t *n1 = n;
		n = n->next;
		free(n1);
	}
}
