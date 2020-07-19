#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @n: number of parameters to print.
 * @separator: char that separates the numbers.
 * Return: sum.
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i, c;

	/* initialize valist for num number of arguments */
	va_start(valist, n);

	/* access all the arguments assigned to valist */
	for (i = 0; i < n; i++)
	{
		c = va_arg(valist, int);
		if (separator == NULL)
			return;
		else if (i == n - 1)
			printf("%d\n", c);
		else
			printf("%d%c ", c, *separator);
	}

	/* clean memory reserved for valist */
	va_end(valist);
}
