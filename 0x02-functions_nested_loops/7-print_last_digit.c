#include "holberton.h"
/**
 * print_last_digit - print last digit of n number.
 * @n: The number to check
 *
 * Return: result.
 *
 */
int print_last_digit(int n)
{
	int result;

	if (n > 0)
	{
		result = n % 10;
		_putchar('0' + result);
		return (result);
	}
	else
	{
		result = (-n);
		result = result % 10;
		_putchar('0' + result);
		return (result);
	}
}
