#include "holberton.h"

/**
	@brief Launch a program and wait for it to terminate.
	@param args Null terminated list of arguments (including program).
	@return Always returns 1, to continue execution.
 */
int lsh_launch(char **args)
{
	pid_t pid;
	int status;

	pid = fork();
	if (pid == 0)
	{
		/* Child process*/
		if (execvp(args[0], args) == -1)
		{
		perror("lsh");
		}
		exit(EXIT_FAILURE);
	}
	else if (pid < 0)
	{
		/*Error forking*/
		perror("lsh");
	}
	else
	{
		/*Parent process*/
		do
		{
			waitpid(pid, &status, WUNTRACED);
		}
		while (!WIFEXITED(status) && !WIFSIGNALED(status));
	}
	return 1;
}

/**
	@brief Execute shell built-in or launch program.
	@param args Null terminated list of arguments.
	@return 1 if the shell should continue running, 0 if it should terminate
 */
int lsh_execute(char **args)
{
	int i;

	if (args[0] == NULL)
	{
		/*An empty command was entered.*/
		return 1;
	}

	for (i = 0; i < lsh_num_builtins(); i++)
	{
		if (strcmp(args[0], builtin_str[i]) == 0)
		{
		return (*builtin_func[i])(args);
		}
	}
	return lsh_launch(args);
}

/**
	@brief Read a line of input from stdin.
	@return The line from stdin.
 */
char *lsh_read_line(void)
{
#ifndef LSH_USE_STD_GETLINE
	char *line = NULL;
	size_t bufsize = 0; /*have getline allocate a buffer for us*/
	if (getline(&line, &bufsize, stdin) == -1)
	{
		if (feof(stdin))
		{
			exit(EXIT_SUCCESS); /*We recieved an EOF*/
		}
		else
		{
			perror("lsh: getline\n");
			exit(EXIT_FAILURE);
		}
	}
	return (line);
#endif
}

#define LSH_TOK_BUFSIZE 64
#define LSH_TOK_DELIM " \t\r\n\a"
/**
	@brief Split a line into tokens (very naively).
	@param line The line.
	@return Null-terminated array of tokens.
 */
char **lsh_split_line(char *line)
{
	int bufsize = LSH_TOK_BUFSIZE, position = 0;
	char **tokens = malloc(bufsize * sizeof(char*));
	char *token, **tokens_backup;

	if (!tokens)
	{
		fprintf(stderr, "lsh: allocation error\n");
		exit(EXIT_FAILURE);
	}
	token = strtok(line, LSH_TOK_DELIM);
	while (token != NULL)
	{
		tokens[position] = token;
		position++;
		if (position >= bufsize)
		{
			bufsize += LSH_TOK_BUFSIZE;
			tokens_backup = tokens;
			tokens = realloc(tokens, bufsize * sizeof(char*));
			if (!tokens)
			{
				free(tokens_backup);
				fprintf(stderr, "lsh: allocation error\n");
				exit(EXIT_FAILURE);
			}
		}
		token = strtok(NULL, LSH_TOK_DELIM);
	}
	tokens[position] = NULL;
	return tokens;
}


/**
	@brief Loop getting input and executing it.
 */
void lsh_loop(void)
{
	char *line;
	char **args;
	int status;

	do
	{
		printf("#cisfun$ ");
		line = lsh_read_line();
		args = lsh_split_line(line);
		status = lsh_execute(args);

		free(line);
		free(args);
	}
	while (status);
}

