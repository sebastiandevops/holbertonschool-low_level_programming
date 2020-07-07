#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - creates array of chars, initializated with a specific char.
 * @size: size of array.
 * @c: char.
 * Return: a pointer to the array or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr = NULL;

	ptr = (char *)malloc(size * sizeof(char));
	if (ptr)
	{
		for (i = 0; i < size; i++)
		{
			ptr[i] = c;
		}
	}
	return (ptr);
}
