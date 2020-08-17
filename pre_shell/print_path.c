#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - stat example
 *
 * Return: Always 0.
 */
int main(void)
{
	char *dup = strdup(getenv("PATH"));
	char *s = dup;
	char *p = NULL;
	do {
		p = strchr(s, ':');
		if (p != NULL) {
			p[0] = 0;
		}
		printf("Path in $PATH: %s\n", s);
		s = p + 1;
	} while (p != NULL);
	free(dup);
	return (0);
}
