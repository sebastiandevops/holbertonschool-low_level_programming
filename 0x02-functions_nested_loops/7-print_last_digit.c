#include "holberton.h"
/**
 * print_last_digit - print last digit of n number.
 * @n: The number to check
 *
 * Return: result.
 * Else: nothing
 */
int print_last_digit(int n)
{
	int result;

	if (n < 0)
	{
		n = (-n);
	}
	result = (n % 10);
	_putchar('0' + result);
	return (result);
}
