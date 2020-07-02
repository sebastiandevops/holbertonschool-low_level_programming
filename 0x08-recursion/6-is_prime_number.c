#include "holberton.h"
/**
 * is_prime_number - a function that checks for prime numbers.
 * @n: number to check.
 *
 * Return: 1 if it is prime else 0..
 *
 */

int is_prime_number(int n)
{
	int i = 2;

	if (n > 0)
	{
		i = 2;
	}
	else
	{
		i = -2;
	}
	return (foo_recursion(n, i));
}

/**
 * foo_recursion - a function that checks for prime numbers.
 * @n: number to check.
 * @i: iterator.
 * Return: 1 if it is prime else 0..
 *
 */
int foo_recursion(int n, int i)
{
	if (n == 1)
	{
		return (0);
	}
	else if (n > 0)
	{
		if (n % i == 0)
		{
			if (i < n)
			{
				return (0);
			}
			else
			{
				return (1);
			}
		}
		else
			i = i + 1;
		return (foo_recursion(n, i));
	}
	else
	{
		if (n % i == 0)
		{
			if (i > n)
			{
				return (0);
			}
			else
			{
				return (1);
			}
		}
		else
		{
			i = i - 1;
			return (foo_recursion(n, i));
		}
	}
}
