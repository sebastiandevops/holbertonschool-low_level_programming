#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_dnodeint_end - function that adds a new node at the end of a
 * dlistint_t list.
 * @head: list header.
 * @n: integer.
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	newNode->n = n;
	newNode->next = NULL;
	if (*head == NULL)
		*head = newNode;
	else
	{
		dlistint_t *lastNode = *head;

		while (lastNode->next != NULL)
		{
			lastNode = lastNode->next;
		}
		lastNode->next = newNode;
	}
	return (*(&newNode));
}
