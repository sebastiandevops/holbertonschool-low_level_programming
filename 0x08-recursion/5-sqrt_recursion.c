#include "holberton.h"
/**
 * _sqrt_recursion - function that returns natural square root of a number..
 * @n: number to check.
 *
 * Return: sqrt.
 *
 */
int _sqrt_recursion(int n)
{
	int i = 1;

	return (_sqrt_recursive(n, i));
}

/**
 * _sqrt_recursive - function that returns natural square root of a number..
 * @n: number to be squert.
 * @i: sqrt.
 * Return: power.
 *
 */
int _sqrt_recursive(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i < 0)
	{
		return (-1);
	}
	else if (i * i < n)
	{
		i++;
	}
	else
	{
		return (-1);
	}
	return (_sqrt_recursive(n, i));
}
