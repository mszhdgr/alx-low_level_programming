#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - a function that searches a string
 * for any of a set of bytes.
 *
 * @s: string locates the first occurrence
 * @accept: pointer containing s bytes
 *
 * Return: s
 *
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
	for (i = 0; accept[i] != '\0'; i++)
	{
		if (*s == accept[i])
		{
		return (s);
		}
	}

	s++;
	}

	return (NULL);
}
