#include "holberton.h"
/**
 * print_sign - return 1 if is positive, else 0 or -1
 * @n: The number to check
 *
 * Return: 1 if is positive or -1 if is negative.
 * Else: return 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{

		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
