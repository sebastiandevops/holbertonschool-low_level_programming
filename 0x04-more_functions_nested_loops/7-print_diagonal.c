#include "holberton.h"

/**
 * print_diagonal - function that draws a diagonal line in the terminal.
 * @n: number of times that the diagonal will be printed.
 *
 * Return: void.
 *
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
			{
				if (j != i)
				{
					_putchar(' ');
				}
				else if (j == i)
				{
					_putchar('\\');
				}
			}
			_putchar('\n');
		}
	}
}
