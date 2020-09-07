#include "holberton.h"
/**
 * _memset - function that fills memory with a constant byte.
 * @s: address of memory to be filled.
 * @b: Value to be filled.
 * @n: Number of bytes to be filled.
 * Return: s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n > 0)
	{
		*p = b;
		p++;
		n--;
	}
	return (s);
}
