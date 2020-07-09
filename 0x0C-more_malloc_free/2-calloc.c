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
	char *ptr;

	if (size == 0 || nmemb == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
	{
		ptr[i] = 0;
	}
	return ((void *)ptr);
}
