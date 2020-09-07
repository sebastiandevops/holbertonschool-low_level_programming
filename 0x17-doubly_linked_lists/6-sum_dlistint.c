#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * sum_dlistint - unction that returns the sum of all the
 * data (n) of a dlistint_t linked list.
 * @head: list header.
 * Return: sum of all the data (n).
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
