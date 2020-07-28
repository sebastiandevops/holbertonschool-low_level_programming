#include "lists.h"
/**
 * free_listint - function that frees a linked list.
 * @head: list header.
 *
 * Return: void.
 */
void free_listint(listint_t *head)
{
	if(head)
		free_listint(head->next);
	free(head);
}
