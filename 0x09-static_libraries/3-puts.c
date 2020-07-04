#include "holberton.h"
/**
 * _puts - prints a string, followed by a new line.
 * @s: string to check.
 *
 * Return: length.
 *
 */
void _puts(char *str)
{
	while(*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
