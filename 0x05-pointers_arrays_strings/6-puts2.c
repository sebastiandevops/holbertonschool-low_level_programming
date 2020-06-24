#include "holberton.h"
/**
 * puts2 - prints even numbers from a string.
 * @str: string to reverse.
 *
 * Return: void.
 *
 */
void puts2(char *str)
{
	int i;
	int len = _strlen(str);

	for (i = 0; i <= len; i++)
	{
		if (str[i] % 2 == 0)
		{
			_putchar(str[i]);
		}
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
