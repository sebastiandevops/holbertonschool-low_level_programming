#include "holberton.h"
/**
 * _strcmp - function that compares two strings.
 * @s1: string s1.
 * @s2: string s2.
 *
 * Return: -15 if s1 < s2; 15 if s1 > s2 & 0 if s1 = s2.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
