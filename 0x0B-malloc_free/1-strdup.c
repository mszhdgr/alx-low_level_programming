#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - a function that returns a pointer to
 * a newly allocated space in memory
 *
 * @str: a pointer to check malloc
 *
 * Return: a pointer or null if memory isn,t enough
 */
char *_strdup(char *str)
{
	size_t len;
	char *copy;

	if (str == NULL)
	{
		return (NULL);
	}

	len = strlen(str);
	copy = malloc(len + 1);

	if (copy == NULL)
	{
		return (NULL);
	}

	memcpy(copy, str, len + 1);

	return (copy);
}
