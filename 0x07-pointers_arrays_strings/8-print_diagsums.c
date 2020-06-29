#include "holberton.h"
/**
 * print_diagsums - Function that prints the sum of each diagonal.
 * @a: 2d array to print.
 * @size: size of 2d array.
 * Return: void.
 *
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum1 = 0, sum2 = 0;
	const int (*ar)[size] = a;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum1 = sum1 + (ar[i][j]);
			}
			if ((i + j) == (size - 1))
			{
				sum2 = sum2 + (ar[i][j]);
			}
		}
	}
	printf("%d, ", sum1);
	printf("%d", sum2);
	_putchar('\n');
}
