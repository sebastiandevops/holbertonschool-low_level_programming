#include "holberton.h"
/**
 * cap_string - function that capitalizes all words of a string..
 * @s: string to change from lower to uppercase.
 *
 * Return: string.
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ',' || s[i] == ';' || s[i] == '.'
		    || s[i] == '!' || s[i] == '?' || s[i] == '"' || s[i] == '('
		    || s[i] == ')' || s[i] == '{' || s[i] == '}' || s[i] == ' '
		    || s[i] == '\t' || s[i] == '\n')
		{
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
			{
				s[i + 1] = s[i + 1] - 32;
			}
		}
	}
	return (s);
}
