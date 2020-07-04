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

	if (atoi(argv[i]) >= 0 && atoi(argv[i]) <= 9)
	{
		for (i = 1; i < argc; i++)
		{
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("Error");
	}
	return (0);
}
