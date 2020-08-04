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
	int ret;
	int wt;
	char *buf = malloc(letters + 1);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	ret = read(fd, buf, letters);
	if (ret == -1)
		return (0);
	wt = write(STDOUT_FILENO, buf, letters);
	if (wt == -1)
		return (0);
	close(fd);
	return (ret);
}
