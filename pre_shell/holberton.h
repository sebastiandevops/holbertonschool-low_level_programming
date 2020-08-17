#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <sys/wait.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>





int lsh_launch(char **args);
int lsh_execute(char **args);
char *lsh_read_line(void);
char **lsh_split_line(char *line);
void lsh_loop(void);

int _putchar(char c);
ssize_t _getline(FILE *stream, char *buf, size_t size);
int lsh_num_builtins();



/*Function Declarations for builtin shell commands:*/

int lsh_cd(char **args);
int lsh_help(char **args);
int lsh_exit(char **args);

  /*List of builtin commands, followed by their corresponding functions.
 */
char *builtin_str[] =
{
	"cd",
	"help",
	"exit"
};

int (*builtin_func[]) (char **) =
{
	&lsh_cd,
	&lsh_help,
	&lsh_exit
};

#endif /* HOLBERTON_H */
