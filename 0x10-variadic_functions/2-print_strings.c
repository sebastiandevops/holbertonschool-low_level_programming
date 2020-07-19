#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - function that prints strings, followed by a new line..
 * @n: number of parameters to print.
 * @separator: char that separates the strings.
 * Return: sum.
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	char *c;

	/* initialize valist for num number of arguments */
	va_start(valist, n);


	/* access all the arguments assigned to valist */
	for (i = 0; i < n; i++)
	{
		c = va_arg(valist, char*);
		if (separator == NULL)
			return;
		else if (c == NULL)
			printf("nil");
		else if (i == n - 1)
			printf("%s\n", c);
		else
			printf("%s%c ", c, *separator);
	}


	/* clean memory reserved for valist */
	va_end(valist);
}
