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
	list_t *current = head;
	list_t *next;

	while (current != NULL)
	{
		next = current->next;
		free (current);
		current = next;
	}
	head = NULL;
}
