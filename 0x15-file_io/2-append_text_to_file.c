#include "holberton.h"

/**
 * append_text_to_file - function that appends text at the end of a file..
 * @filename: file to read.
 * @text_content: file content.
 * Return: On success 1.
 * On error, -1 is returned.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int wt;
	int textlen;

	textlen = _strlen(text_content);
	if (textlen <= 0)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	wt = write(fd, text_content, textlen);
	if (wt == -1)
		return (-1);
	close(fd);
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
