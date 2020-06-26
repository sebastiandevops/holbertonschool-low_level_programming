#include "holberton.h"
/**
 * rot13 - function that encode a string.
 * @s: string to encode.
 *
 * Return: string.
 */
char *rot13(char *s)
{
	int i1;
	int i2;
	char abc[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i1 = 0; s[i1]; i1++)
	{
		for (i2 = 0; abc[i2] ; i2++)
		{
			if (s[i1] == abc[i2])
			{
				s[i1] = rot13[i2];
			}
		}
	}
	return (s);
}
