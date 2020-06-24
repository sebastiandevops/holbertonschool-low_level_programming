#include "holberton.h"
/**
 * rev_string - prints a string in reverse, followed by a new line.
 * @s: string to reverse.
 *
 * Return: void.
 *
 */
void rev_string(char *s)
{
	int length, c;
	char *begin, *end, temp;

	length = _strlen(s);
	begin = s;
	end = s;

	for (c = 0; c < length - 1; c++)
		end++;

	for (c = 0; c < length / 2; c++)
	{
		temp = *end;
		*end = *begin;
		*begin = temp;

		begin++;
		end--;
	}
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
