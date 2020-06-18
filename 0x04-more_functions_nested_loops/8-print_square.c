#include "holberton.h"
/**
 * print_square - function that draws a square in the terminal.
 * @size: number of times that the line will be printed.
 *
 * Return: void.
 *
 */
void print_square(int size)
{
	int i, j;

	/* Iterate through N rows */
	for (i = 1; i <= size; i++)
	{
		/* Iterate over columns */
		for (j = 1; j <= size; j++)
		{
			/* Print star for each column */
			_putchar('#');
		}
		if (size < 0)
		{
			_putchar('\n');
		}
		/* Move to the next line/row */
		_putchar('\n');
	}
}
