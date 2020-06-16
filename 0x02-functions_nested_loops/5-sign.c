#include "holberton.h"
/**
 * int print_sign - return 1 if is positive, else 0 or -1
 * @n: The character to check
 *
 * Return: 1, -1 or 0.
 *
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
