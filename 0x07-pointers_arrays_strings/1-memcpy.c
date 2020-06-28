#include "holberton.h"
/**
 * _memcpy - copies n bytes from memory area src to memory area dest.
 * @dest: memory area to be filled.
 * @src: memory area to be filled.
 * @n: Number of bytes to be filled.
 * Return: dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *csrc = src;
	char *cdest = dest;

	for (i = 0; i < n; i++)
	{
		cdest[i] = csrc[i];
	}
	return (dest);
}
