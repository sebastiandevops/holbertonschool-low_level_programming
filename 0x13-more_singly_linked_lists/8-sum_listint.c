#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n) of a linked list.
 * if the linked list is empty return 0
 * @head: list header.
 *
 * Return: if the node does not exist, return NULL.
 */
int sum_listint(listint_t *head)
{
	int count = 0;
	int sum = 0;

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
		count++;
	}
	return (sum);
}
