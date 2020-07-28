#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a linked list.
 * if the linked list is empty return 0
 * @head: list header.
 *
 * Return: if the linked list is empty return 0.
 */
int pop_listint(listint_t **head)
{
	int result = (*head)->n;

	if (*head == NULL)
		return (0);
	(*head) = (*head)->next;
	free(head);
	return (result);
}
