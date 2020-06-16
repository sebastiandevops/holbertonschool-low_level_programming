#include "holberton.h"
/**
 * print_last_digit - print last digit of n number.
 * @n: The number to check.
 *
 * Return: result.
 * Else: nothing
 */
int print_last_digit(int n)
{
	if (n < 0)
	n = -1 * (n % 10);
	else
	n = n % 10;
	_putchar(n + '0');
	return (n);
}
