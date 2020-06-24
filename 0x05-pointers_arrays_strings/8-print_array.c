#include "holberton.h"
/**
 * print_array - prints a array to n, followed by a new line.
 * @a: array to print.
 * @n: number until print.
 * Return: void.
 *
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
		{
			printf("%d, ", a[i]);

		}
		else
		{
			printf("%d", a[i]);
		}
	}
	printf("\n");
}
