#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>

/**
 * main - fork & wait example
 *
 * Return: Always 0.
 */
int main(void)
{
	pid_t child_pid, second_pid = 8524564;
	int status1, status2, s;

	(void)s;
	printf("no ha pasado nada\n");
	child_pid = fork();
	printf("1\n");
	if (child_pid == -1)
	{
		perror("Error:");
		return (1);
	}
	if (child_pid == 0)
	{

		printf("soy el hijo mayor\n");
		sleep(10);
		exit(status1);
		printf("Me morí\n");
	}
	printf("soy %d y Child PID: %d\n", getpid(),child_pid);
	second_pid = fork();
	printf("Soy: %d, y mi segundo hijo es %d\n", getpid(), second_pid);
	if (second_pid == 0)
	{

		printf("soy el segundo hijo\n");
		exit(status2);

		sleep(10);
	}
	else
	{
		printf("Soy el papá y voy a esperar\n");
		wait(&status1);
		printf("Oh, it's all better now\n");
		wait(&status2);
		printf("que putas\n");
	}
	printf("5\n");
	return (0);
}
