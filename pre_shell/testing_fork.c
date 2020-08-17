#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(void)
{
	fork();
	fork();
	printf("llamando a fork\n");
	return (0);
}
