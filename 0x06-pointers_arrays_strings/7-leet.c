#include "holberton.h"
/**
 * leet - function that encode a string.
 * @s: string to encode.
 *
 * Return: string.
 */
char *leet(char *s)
{
	int i;
	int j;
	char letras[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char numeros[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; letras[j] <= 10 ; j++)
		{
			if (s[i] == letras[j])
			{
				s[i] = numeros[j];
			}
		}
	}
	return (s);
}
