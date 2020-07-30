#include "holberton.h"
/**
 * flip_bits - function that returns the number of bits you would need
 * to flip to get from one number to another.
 * @n: unsigned long integer to check.
 * @m: unsigned long integer to check..
 * Return: number of bits need it to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int result;

	result = countSetBits(n ^ m);
	return (result);
}

/**
 * countSetBits - Function that count set bits .
 * @n: number to check.
 *
 * Return: count.
 */
int countSetBits(int n)
{
	int count = 0;

	while (n > 0)
	{
		count++;
		n &= (n - 1);
	}
	return (count);
}
