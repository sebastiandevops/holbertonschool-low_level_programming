#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

/**
 * main - stat example
 *
 * Return: Always 0.
 */
int main(int ac, char **av, char **env)
{
	extern char **environ;

	(void)ac;
	(void)av;
	printf("%s\n", *environ);
	printf("%s\n", &(**env));
	return (0);
}
