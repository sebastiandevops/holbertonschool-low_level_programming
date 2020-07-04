#include "holberton.h"
/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: The string to be scanned.
 * @accept: string containing the characters to match.
 *
 * Return: length of s matched with accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}
	return (i);
}
