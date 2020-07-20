#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - function that prints anything.
 * @format: list of types.
 * Return: void.
 *
 */
void print_all(const char * const format, ...)
{
	va_list valist;

	int j = 0, k;
	const char *strings[4] = {"%c", "%d", "%f", "%s"};
	const char otros[4] = {'c', 'i', 'f', 's'};

	va_start(valist, format);
	while (format[j] != '\0')
	{
		if (j != 0)
			printf(", ");
		k = 0;
		while (k < 4)
		{
			if (format[j] == otros[k])
			{
				printf(strings[k], va_arg(valist, int));
			}
			k++;
		}
		j++;
	}
	printf("\n");
	va_end(valist);
}
