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
		dprintf(2, "Usage: cp %s %s\n", av[1], av[2]);
		exit(97);
	}
	n = read_textfile2(av[1], av[2], 1024);
	return (n);
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
	int fd, ret, cd, wt, cl;
	char *buf = malloc(letters + 1);

	fd = open(filename, O_RDONLY);
	ret = read(fd, buf, letters);
	if (ret == -1 || fd == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	cl = close(fd);
	if (cl == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	cd = open(copyname, O_CREAT | O_RDWR | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (cd == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", copyname);
		exit(99);
	}
	wt = write(cd, buf, ret);
	if (wt == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", copyname);
		exit(99);
	}
	cl = close(cd);
	if (cl == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", cd);
		exit(100);
	}
	return (1);
}
