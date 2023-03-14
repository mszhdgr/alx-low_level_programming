#include <stdlib.h>
#include <string.h>
/**
 * str_concat -  a function that concatenates two strings.
 *
 * @s1: string containing xters
 * @s2: string to cat into s1
 *
 * Return: if pass else return null
 */
char *str_concat(char *s1, char *s2)
{
	size_t len1, len2;
	char *result;

	if (s1 == NULL)
	{
	s1 = "";
	}
	if (s2 == NULL)
	{
	s2 = "";
	}
	len1 = strlen(s1);
	len2 = strlen(s2);

	result = malloc(len1 + len2 + 1);
	if (result == NULL)
	{
	return (NULL);
	}

	memcpy(result, s1, len1);
	memcpy(result + len1, s2, len2 + 1);

	return (result);
}
