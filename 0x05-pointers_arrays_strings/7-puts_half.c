#include "holberton.h"
/**
 * puts_half - prints a string in reverse, followed by a new line.
 * @str: string to reverse.
 *
 * Return: void.
 *
 */
void puts_half(char *str)
{
	int i, n, len;

	len = _strlen(str);

	if (len % 2 != 0)
	{
		n = (len + 1) / 2;
	}
	else
	{
		n = len / 2;
	}

	for (i = n; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
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
