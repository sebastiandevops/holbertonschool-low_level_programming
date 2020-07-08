#include "holberton.h"
#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings.
 * @s1: string 1.
 * @s2: string 2.
 * Return: NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	int i, size;
	char *ptr = NULL;

	if (s1 == NULL)
		s1 = "";
	else if (s2 == NULL)
		s2 = "";
	size = _strlen(s1) + _strlen(s2);

	ptr = (char *)malloc(size);

	if (ptr)
	{
		for (i = 0; i < _strlen(s1); i++)
		{
			ptr[i] = s1[i];
		}
		for (i = 0; i < _strlen(s2); i++)
		{
			ptr[i + _strlen(s1)] = s2[i];
		}
		ptr[i + _strlen(s1)] = '\0';
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
