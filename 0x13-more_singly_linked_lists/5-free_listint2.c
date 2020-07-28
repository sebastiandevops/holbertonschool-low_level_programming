#include "lists.h"
/**
 * free_listint2 - function that frees a linked list.
 * the function sets head to NULL.
 * @head: list header.
 *
 * Return: void.
 */
void free_listint2(listint_t **head)
{
	listint_t *current = *head;
	listint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*head = NULL;
}
