#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - function that allocates memory for an array, using malloc.
 * @nmemb: memory for an array of nmemb elements of size.
 * @size: bytes to allocate.
 *
 * Return:  a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr = NULL;

	ptr = (char *)malloc(size * sizeof(char));
	if (size == 0)
		return (NULL);
	else if (ptr)
	{
		for (i = 0; i < size; i++)
		{
			ptr[i] = nmemb;
		}
	}
	ptr[i] = '\0';
	return (ptr);
}
