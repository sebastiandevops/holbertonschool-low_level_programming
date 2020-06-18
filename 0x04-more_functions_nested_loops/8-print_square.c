#include "holberton.h"
/**
 * print_square - function that draws a square in the terminal.
 * @size: size of the square
 *
 * Return: void.
 *
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		/* Iterate through N rows */
		for (i = 1; i <= size; i++)
		{
			/* Iterate over columns */
			for (j = 1; j <= size; j++)
			{
				/* Print star for each column */
				_putchar('#');
			}
			/* Move to the next line/row */
			_putchar('\n');
		}
	}
}
