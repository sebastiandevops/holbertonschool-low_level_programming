#include "holberton.h"

/**
 * read_textfile - function that reads a text file and
 * prints it to the POSIX standard output.
 * @filename: file to read.
 * @letters: number of letters it should read and print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int count = 0;
	char *buf = malloc(letters + 1);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	read(fd, buf, letters);
	while (*buf)
	{
		_putchar(*buf);
		buf++;
		count++;
	}
	close(fd);
	return (count);
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
		return (write(1, &c, 1));
}
