#include "holberton.h"
/**
 * print_number - function that prints an integer..
 * @n: number of times that the diagonal will be printed.
 *
 * Return: void.
 *
 */
void print_number(int n)
{
	int cont;
	int aux;

	if (n < 0)
	{
		_putchar('-');
		aux = n;
		cont = -1;
		while (aux < -9)
		{
			aux = (aux / 10);
			cont = (cont * 10);
		}
		while (cont <= -1)
		{
			_putchar((n / cont) + '0');
			n = (n % cont);
			cont = (cont / 10);
		}
	}
	else
	{
		aux = n;
		cont = 1;
		while (aux > 9)
		{
			aux = (aux / 10);
			cont = (cont * 10);
		}
		while (cont >= 1)
		{
			_putchar((n / cont) + '0');
			n = (n % cont);
			cont = (cont / 10);
		}
	}
}
