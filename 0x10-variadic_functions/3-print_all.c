#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - function that prints anything.
 * @format: list of types.
 * Return: sum.
 *
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	char *s, c;
	int i, j, n = 0;
	double d;

	va_start(valist, format);
	while (format[n] != '\0')
		n++;
	for (j = 0; j < n; j++)
	{
		if (format[j] == 'c')
		{
			c = va_arg(valist, int);
			printf("%c", c);
		}
		else if (format[j] == 'i')
		{
			i = va_arg(valist, int);
			printf("%d", i);
		}
		else if (format[j] == 'f')
		{
			d = va_arg(valist, double);
			printf("%f", d);
		}
		else if (format[j] == 's')
		{
			s = va_arg(valist, char*);
			printf("%s", s);
		}
		else
			continue;

		if (j == n - 1)
			printf("\n");
		else
			printf(", ");

	}
	va_end(valist);
}
