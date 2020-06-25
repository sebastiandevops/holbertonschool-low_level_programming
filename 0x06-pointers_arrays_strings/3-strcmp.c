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

	for (i = 0; s1[i] && s2[i]; ++i)
	{
		if (s1[i] > s2[i])
		{
			return (15);
		}
		else if (s1[i] == s2[i])
		{
			return (0);
		}
		else
		{
			return (-15);
		}
	}
	return (0);
}
