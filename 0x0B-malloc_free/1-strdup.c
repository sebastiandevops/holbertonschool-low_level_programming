#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string.
 *
 * Return: NULL if str = NULL.
 * On success, returns a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	int i, size;
	char *ptr = NULL;

	size = _strlen(str);

	ptr = (char *)malloc(size);

	if (str == NULL)
		return (NULL);
	else if (ptr)
	{
		for (i = 0; i < size && str[i] != '\0'; i++)
		{
			ptr[i] = str[i];
		}
		ptr[i] = '\0';
	}
	return (ptr);
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
