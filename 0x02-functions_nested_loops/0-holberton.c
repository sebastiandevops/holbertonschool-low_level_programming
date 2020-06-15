#include "holberton.h"
/**
 * main - Prints "program that prints Holberton, followed by a new line"
 *
 * Return: 0
 */
int main(void)
{
	char source[] = "Holberton";
	char *c = source;

	while (*c)
	{
		_putchar(*c++);
	}
	_putchar('\n');
	return (0);
}
