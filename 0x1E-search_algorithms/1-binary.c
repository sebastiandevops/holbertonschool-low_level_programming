#include "search_algos.h"
/**
 * binary_search - searches for a value in an array of integers using
 * the Binary search algorithm.
 * @array: pointer to the first element of the array to search in.
 * @size: number of elements in array.
 * @value: value to search for
 *
 * Return:  the first index where value is located, otherwise, return -1.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l = 0;
	size_t r = size - 1;

	while (l <= r)
	{
		size_t m = l + (r - l) / 2;

		if (array[m] == value)
		{
			size_t j;

			printf("Searching in array: ");
			for (j = l; j < r + 1; j++)
			{
				if (j != r)
					printf("%d, ", array[j]);
				else
					printf("%d", array[j]);
			}
			printf("\n");
			return (m);
		}
		if (array[m] < value)
		{
			printR(array, r, l);
			l = m + 1;
		}
		else
		{
			printL(array, r);
			r = m - 1;
		}
	}
	return (-1);
}

/**
 * printL - prints left side.
 * @array: pointer to the first element of the array to print.
 * @r: right limit of array.
 *
 * Return: void.
 */
void printL(int *array, size_t r)
{
	size_t j;

	printf("Searching in array: ");
	for (j = 0; j < r + 1; j++)
	{
		if (j != r)
			printf("%d, ", array[j]);
		else
			printf("%d", array[j]);
	}
	printf("\n");
}

/**
 * printR - prints right side of array.
 * @array: pointer to the first element of the array to print.
 * @r: right limit of array.
 * @l: left limit of array.
 *
 * Return: void.
 */
void printR(int *array, size_t r, size_t l)
{
	size_t j;

	printf("Searching in array: ");
	for (j = l; j < r + 1; j++)
	{
		if (j != r)
			printf("%d, ", array[j]);
		else
			printf("%d", array[j]);
	}
	printf("\n");
}
