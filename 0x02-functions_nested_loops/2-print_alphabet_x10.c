#include "holberton.h"
/**
 * print_alphabet_x10 - prints the alphabet 10x.
 *
 *
 * Return: void.
 *
 */
void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i < 11)
	{
		for (c = 'a'; c <= 'z'; ++c)
		_putchar(c);
		_putchar('\n');
		i++;
	}
}
