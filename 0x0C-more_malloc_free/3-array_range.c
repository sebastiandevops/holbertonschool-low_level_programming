#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers.
 * @min: min value of array.
 * @max: max value from array.
 *
 * Return: the pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int i;
	int *ptr;

	if (min > max)
	{
		return (NULL);
	}

	ptr = malloc(((max - min) + 1) * sizeof(int));
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = min; i < (max + 1); i++)
		{
			ptr[i] = i;
		}
	}
	return (ptr);
}
