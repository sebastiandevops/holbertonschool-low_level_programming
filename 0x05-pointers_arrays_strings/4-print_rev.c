#include "holberton.h"
/**
 * print_rev - prints a string in reverse, followed by a new line.
 * @s: string to reverse.
 *
 * Return: void.
 *
 */
void print_rev(char *s)
{
	int _strlen(char *s);

	int len;

	len = _strlen(s) - 1;

	while (len >= 0)
	{
		_putchar(*(s + len));
		len--;
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
