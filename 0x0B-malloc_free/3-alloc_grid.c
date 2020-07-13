#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: x.
 * @height: y.
 * Return: NULL on failure.
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **ptr = NULL;

	ptr = malloc(height * sizeof(int *));
	if (width <= 0 || height <= 0)
		return (NULL);
	else if (ptr)
	{
		for (i = 0; i < height; i++)
		{
			ptr[i] = malloc(width * sizeof(int));
			for (j = 0; j < width; j++)
			ptr[i][j] = 0;
		}
	}
	return (ptr);
	free (ptr);
}
