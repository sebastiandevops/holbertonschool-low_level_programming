#include "holberton.h"
/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: pointer to a string of 0 an 1 chars.
 *
 * Return: the converted number, or 0 if.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int total = 0;

	while (*b)
	{
		if (*b < '0' || *b > '1')
			return (0);
		total *= 2;
		if (*b == '1')
			total += 1;
		b++;
	}
	return (total);
}
