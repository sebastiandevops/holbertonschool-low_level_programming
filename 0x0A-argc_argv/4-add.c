#include <stdio.h>
#include <stdlib.h>
int isalpha(int argument);
/**
 * main - program that adds positive numbers.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i = 0, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if(atoi(argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			exit(1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
