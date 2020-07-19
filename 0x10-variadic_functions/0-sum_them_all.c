#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: number of parameters to sum.
 *
 * Return: sum.
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	int sum = 0;
	unsigned int i;

	/* initialize valist for num number of arguments */
	va_start(valist, n);

	/* access all the arguments assigned to valist */
	for (i = 0; i < n; i++)
	{
		sum += va_arg(valist, int);
	}

	/* clean memory reserved for valist */
	va_end(valist);

	return (sum);
}
