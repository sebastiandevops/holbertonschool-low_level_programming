#include "3-calc.h"
/**
 * op_add - returns the sum of a and b.
 * @a: Integer to sum.
 * @b: Integer to sum.
 * Return: Result.
 *
 */
int op_add(int a, int b)
{
	int result;

	result = (a + b);
	return (result);
}

/**
 * op_mul - returns the product of a and b.
 * @a: Integer to mult.
 * @b: Integer to mult.
 * Return: Result.
 *
 */
int op_mul(int a, int b)
{
	int result;

	result = (a * b);
	return (result);
}

/**
 * op_sub - returns the difference of a and b.
 * @a: Integer.
 * @b: Integer.
 * Return: Result.
 *
 */
int op_sub(int a, int b)
{
	int result;

	result = (a - b);
	return (result);
}

/**
 * op_div - returns the result of the division of a by b.
 * @a: Integer.
 * @b: Integer.
 * Return: Result.
 *
 */
int op_div(int a, int b)
{
	int result;

	result = (a / b);
	return (result);
}

/**
 * op_mod - returns the remainder of the division of a by b.
 * @a: Integer.
 * @b: Integer.
 * Return: Result.
 *
 */
int op_mod(int a, int b)
{
	int result;

	result = (a % b);
	return (result);
}
