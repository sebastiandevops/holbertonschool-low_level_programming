#include "holberton.h"
/**
 * _strncat - function that concatenates two strings.
 * @dest: destiny string.
 * @src: source to append to dest.
 * @n: number of characters to be appended.
 * Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = _strlen(dest);
	int i;

	for (i = 0 ; i < n && src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';

	return (dest);
}
