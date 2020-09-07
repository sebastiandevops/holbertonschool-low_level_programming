#include "holberton.h"
/**
 * _strchr - returns a pointer to the first occurrence of the character c.
 * @s: The string in which the character is searched.
 * @c: character to be searched.
 *
 * Return: a pointer if it found the character or NULL if is not.
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			break;
		}
	}
	if (s[i] == c)
	{
		return (&s[i]);
	}
	return (0);
}
