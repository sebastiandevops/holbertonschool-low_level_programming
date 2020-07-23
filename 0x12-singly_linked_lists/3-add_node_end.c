#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int _strlen(char *s);
/**
 * add_node_end - function that adds a new node at the end of a linked list.
 * @head: list header.
 * @str: string.
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = NULL;
	list_t *last = NULL;
	char *temp = strdup(str);

	new_node = (list_t *)malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);
	new_node->str = temp;
	new_node->next = NULL;
	new_node->len = _strlen(temp);
	if (*head == NULL)
	{
		*head = new_node;
		return (NULL);
	}
	last = *head;
	while (last->next)
		last = last->next;
	last->next = new_node;
	return (new_node);
}
/**
 * _strlen - function that returns the length of a string.
 * @s: string to check.
 *
 * Return: length.
 *
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i)
	{
	}
	return (i);
}
