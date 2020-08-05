#include "holberton.h"

 /**
 * main - program that copies the content of a file to another file.
 * @ac: argument counter.
 * @av: argument vector.
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int n;

	if (ac != 3)
	{
		dprintf(2, "Usage: %s filename text\n", av[0]);
		exit(1);
	}
	n = read_textfile2(av[1], av[2], 1024);
	printf("-> %i)\n", n);

	return (0);
}

/**
 * read_textfile2 - function that copies the content of a file to another file.
 * @filename: file to read.
 * @copyname: file to create and copy the content of filename.
 * @letters: number of letters it should read and print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int read_textfile2(const char *filename, const char *copyname, size_t letters)
{
	int fd;
	int ret;
	char *buf = malloc(letters + 1);
	int cd;
	int wt;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	ret = read(fd, buf, letters);
	if (ret == -1)
		return (0);
	close(fd);
	cd = open(copyname, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);
	if (cd == -1)
	{
		return (-1);
	}
	wt = write(cd, buf, ret);
	if (wt == -1)
		return (-1);
	close(cd);
	return (1);
}

