#include "main.h"
#include <stddef.h>

/**
 * _strchr - a function that locates a character in a string.
 *
 * @s: a pointer to the string s
 * @c: character to find the string
 *
 * Return: *s
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{

	if (*s == c)
	{
		return (s);
	}

	s++;
	}

	return (NULL);
}
