#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>

/**
 * main - execve example
 *
 * Return: Always 0.
 */
int main(void)
{
	char *argv[] = {"/bin/ls", "-l", "/tmp/", NULL};
	int i;
	for(i = 0; i < 5; i++) /* loop will run n times (n=5)*/
	{
		if(fork() == 0)
		{
			if (execve(argv[0], argv, NULL) == -1)
			{
				perror("Error:");
			}
			exit(0);
		}
	}
	for(i = 0; i < 5; i++) /* loop will run n times (n=5)*/
		wait(NULL);
	return (0);
}
