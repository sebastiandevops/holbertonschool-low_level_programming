#include "holberton.h"
/**
 * print_chessboard - Function that prints a chessboard.
 * @a: 2d array to print.
 *
 * Return: void.
 *
 */
void print_chessboard(char (*a)[8])
{
	int r, c;

	for (r = 0; r <= 8; r++)
	{
		for (c = 0; c <= 8; c++)
		{
			_putchar(a[r][c]);
		}
		_putchar('\n');
	}
}
