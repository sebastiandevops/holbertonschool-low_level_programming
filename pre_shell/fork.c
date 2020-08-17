#include <stdio.h>
#include <unistd.h>

/**
 * main - fork example
 *
 * Return: Always 0.
 */
int main(void)
{
	pid_t parent_pid;
	pid_t child_pid;

	child_pid = fork();
	if (child_pid == -1)
	{
		perror("Error:");
		return (1);
	}
	printf("child pid is %u\n", child_pid);
	parent_pid = getpid();
	printf("Parent pid is %u\n", parent_pid);
	if (child_pid != 0)
	{
		printf("(%u) is the father of %u\n", parent_pid, child_pid);
	}
	else
	{
		printf("(%u) Nooooooooo!\n", parent_pid);
	}
	return (0);
}
