#include "holberton.h"
/**
 * swap_int - swap te values of two integers.
 * @a: variable to swap.
 * @b: variable to swap.
 * Return: void.
 *
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
