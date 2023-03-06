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
	/* Loop through each character in the string */
	while (*s != '\0')
	{
	/* If the current character matches the*/
	/* target character, return a pointer to it */
	if (*s == c)
	{
		return (s);
	}

	/* Move to the next character in the string */
	s++;
	}

	/* If the target character was not found, return NULL */
	return (NULL);
}
