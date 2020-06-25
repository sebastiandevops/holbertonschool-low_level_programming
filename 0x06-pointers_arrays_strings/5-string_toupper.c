#include "holberton.h"
/**
 * string_toupper - function that concatenates two strings.
 * @s: string to change from lower to uppercase.
 *
 * Return: string.
 */
char *string_toupper(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		if (s[c] >= 'a' && s[c] <= 'z')
		{
			s[c] = s[c] - 32;
		}
		c++;
	}
	return (s);
}
