#include <stdio.h>
#include <unistd.h>
int main(void)
{
	printf("my PID = %d\nmy parent's PID = %d\n", getpid(), getppid());
	return (0);
}
