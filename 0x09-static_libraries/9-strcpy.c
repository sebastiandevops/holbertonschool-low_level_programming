#include "holberton.h"
/**
 * _strcpy - copies the string pointed to by src to dest including ('\0').
 * @dest: destiny string.
 * @src: source string.
 *
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; ++i)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return dest;
}
