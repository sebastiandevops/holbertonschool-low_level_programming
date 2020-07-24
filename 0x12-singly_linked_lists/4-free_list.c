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
	void *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
