#include "main.h"
#include <stddef.h>
#include <string.h>
/**
 * _strstr - function finds the first occurrence of the
 * substring needle in the string haystack
 *
 * @needle: substring to be checked
 * @haystack: pointer to substring needle
 *
 * Return: a pointer or Null to the substring
 *
 */

char *_strstr(char *haystack, char *needle)
{
	int needle_len = strlen(needle);

	while (*haystack != '\0')
	{
	if (strncmp(haystack, needle, needle_len) == 0)
	{
		return (haystack);
	}

	haystack++;
	}

	return (NULL);
}

