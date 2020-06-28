#include "holberton.h"
/**
 * _strstr - finds the first occurrence of the substring needle in haystac.
 * @haystack: The string to be scanned.
 * @needle: string containing the characters to match.
 *
 * Return: pointer to the beginning of the substring
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *a;
	char *b;

	b = needle;
	if (*b == 0)
	{
		return ((char *) haystack);
	}
	for ( ; *haystack != 0; haystack += 1)
	{
		if (*haystack != *b)
		{
			continue;
		}
		a = haystack;
		while (1)
		{
			if (*b == 0)
			{
				return ((char *) haystack);
			}
			if (*a++ != *b++)
			{
				break;
			}
		}
		b = needle;
	}

	return (NULL);
}
