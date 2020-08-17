#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(int argc, char *argv[])
{
	int child_pid, wait_pid, status;

	(void)status;
	(void)argc;
	child_pid=fork();
	if(child_pid==0)
	{ /* child process*/
		execvp(argv[1], &argv[1]);
		printf("ERROR\n");
			exit(1);
	}
	else
	{ /* parent process*/
		wait_pid=wait(NULL);
		printf("%d %d",getpid(),wait_pid);
	}
	return (0);
}
