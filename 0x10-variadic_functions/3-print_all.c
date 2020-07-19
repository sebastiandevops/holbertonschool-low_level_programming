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
	char *s;
	int i;
	int j = 0;
	double d;
	char c;
	int n = 0;

	while (format[n] != '\0')
		n++;

	va_start(valist, format);
	for (j = 0; j < n; j++)
	{

		if (j == n - 1)
		{
			if (format[j] == 'c')
			{
				c = va_arg(valist, int);
				printf("%c\n", c);
			}
			else if (format[j] == 'i')
			{
				i = va_arg(valist, int);
				printf("%d\n", i);
			}
			else if (format[j] == 'f')
			{
				d = va_arg(valist, double);
				printf("%f\n", d);
			}
			else if (format[j] == 's')
			{
				s = va_arg(valist, char*);
				printf("%s\n", s);
			}
		}
		else
		{
			if (format[j] == 'c')
			{
				c = va_arg(valist, int);
				printf("%c, ", c);
			}
			else if (format[j] == 'i')
			{
				i = va_arg(valist, int);
				printf("%d, ", i);
			}
			else if (format[j] == 'f')
			{
				d = va_arg(valist, double);
				printf("%f, ", d);
			}
			else if (format[j] == 's')
			{
				s = va_arg(valist, char*);
				printf("%s, ", s);
			}
		}
	}
	va_end(valist);
}

