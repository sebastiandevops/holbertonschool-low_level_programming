#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <unistd.h>
char **_strtok(void);
int _strlen(char *s);
/**
 * _strtok - function that splits a string and
 * returns an array of each word of the string.
 *
 * Return: Always 0.
 */
char **_strtok(void)
{
	int bytes_read;
	size_t size;
	char *text;
	const char s[2] = " ";
	char *token;
	char **argv = NULL;
	int i = 0, j;
	int s_token;

	printf("$ ");
	text = (char *) malloc(size);
	bytes_read = getline(&text, &size, stdin);
	if (bytes_read == -1)
		puts("ERROR!");

	argv = malloc(bytes_read * sizeof(char));
	token = strtok(text, s);
	while (token != NULL)
	{
		s_token = _strlen(token);
		argv[i] = malloc(s_token * sizeof(char));
		for (j = 0; j < s_token; j++)
			argv[i][j] = token[j];
		token = strtok(NULL, s);
		i++;
	}
	return (argv);
}

/**
 * _strlen - function that returns the length of a string.
 * @s: string to check.
 *
 * Return: length.
 *
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i)
	{
	}
	return (i);

}

/**
 * main - program that splits a string and
 * returns an array of each word of the string.
 *
 * Return: Always 0.
 */
int main(void)
{
	char **av;

	av = _strtok();
	printf("%s\n", av[0]);
	printf("%s\n", av[1]);
	return (0);
}
