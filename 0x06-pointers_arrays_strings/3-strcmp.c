#include "main.h"

/**
 * _strcmp - it compares two strings and returns an int
 *
 * @s1: string to be compared
 * @s2: string to be compared
 *
 * Return: the comparison
 *
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
	if (*s1 != *s2)
	{
	return (*s1 - *s2);
	}

	s1++;
	s2++;
	}

	return (*s1 - *s2);
}
