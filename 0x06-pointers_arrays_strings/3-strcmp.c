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
		/* If characters are same or inverting the*/
		/* 6th bit makes them same */
		if (s1[i] == s2[i] || (s1[i] ^ 32) == s2[i])
			continue;
		else
			break;
	}
	/* Compare the last (or first mismatching in*/
	/* case of not same) characters */
	if (s1[i] == s2[i])
		return (0);
	/* Set the 6th bit in both, then compare*/
	if ((s1[i] | 32) < (s2[i] | 32))
		return (-15);
	return (15);
}
