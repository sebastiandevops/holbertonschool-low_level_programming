#include "holberton.h"
/**
 * print_to_98 - return the sum of two integers
 * @n: number to start.
 * @b: Integer to sum.
 * Return: Result.
 *
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i < 99 ; i++)
		{
			if (i < (-99))
			{
				_putchar('-');
				i = -i;
				_putchar((i / 100) + '0');
				_putchar(((i - (i / 100) * 100) / 10) + '0');
				_putchar((i % 10) + '0');
				i = -i;
			}
			else if (i < (-9))
			{
				_putchar('-');
				i = -i;
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
				i = -i;
			}
			else if (i < 0)
			{
				_putchar('-');
				i = -i;
				_putchar(i + '0');
				i = -i;
			}
			else if (i < 10)
			{
				_putchar(i + '0');
			}
			else if (i > 9)
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else if (n >= 98)
	{
		for (i = n; i > 98 ; i--)
		{
			if (i < 100)
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}
			else if (n >= 100)
			{
				_putchar((i / 100) + '0');
				_putchar(((i - (i / 100) * 100) / 10) + '0');
				_putchar((i % 10) + '0');
			}
			if (i != 99)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
