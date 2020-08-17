#include "holberton.h"
/**
 * main - program that prints "$ ", wait for the user to enter a command
 * prints it on the next line.
 *
 * Return: Always 0.
 */
int main(void)
{
	int bytes_read;
	size_t size;
	char *text;

	printf("$ ");
	text = (char *) malloc(size);
	bytes_read = getline(&text, &size, stdin);
	if (bytes_read == -1)
	{
		puts("ERROR!");
	}
	else
		puts(text);
	return (0);
}

