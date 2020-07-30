#include "holberton.h"
/**
 * print_binary - function that converts a binary number to an unsigned int.
 * @n: unsigned integer to convert.
 *
 * Return: void.
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n>>1);
	_putchar((n & 1) + '0');
}
