#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - program that prints all the arguments, without using ac.
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int i = 1;

	while (av[i] != NULL)
	{
		printf("%s\n", av[i]);
		i++;
	}
	return (ac);
}

