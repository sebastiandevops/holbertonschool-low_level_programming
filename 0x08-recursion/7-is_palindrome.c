#include "holberton.h"
/**
 * is_palindrome - a function that checks for palindrome strings.
 * @s: string to check.
 *
 * Return: 1 if it is palindrome else 0.
 *
 */

int is_palindrome(char *s)
{
	int length;
	char *begin, *end;

	length = _strlen(s);
	begin = s;
	end = s + length - 1;

	return (is_palindrome_recursive(begin, end));
}

/**
 * is_palindrome_recursive - checks for palindrome strings.
 * @begin: start of string.
 * @end: end of string.
 * Return: 1 on succes else 0.
 *
 */
int is_palindrome_recursive(char *begin, char *end)
{

	if (*begin != '\n')
	{
		if (*end == *begin)
		{
			begin++;
			end--;
			is_palindrome_recursive(begin, end);
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

/**
 * _strlen - function that returns the length of a string.
 * @s: string to check.
 *
 * Return: length.
 *
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i)
	{
	}
	return (i);
}
