#include "lists.h"
/**
 * add_nodeint_end - function that adds a new node at the end of a linked list.
 * @head: list header.
 * @n: integer.
 *
 * Return: integer.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));
	newNode->n = n;
	newNode->next = NULL;

	if(*head == NULL)
		 *head = newNode;
	else
	{
		listint_t *lastNode = *head;

		while(lastNode->next != NULL)
		{
			lastNode = lastNode->next;
		}
		lastNode->next = newNode;
	}
	return (&(*newNode));
}
