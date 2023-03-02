#include "main.h"

/**
 * string_toupper - converts string to uppercase
 *
 * @str: pointer to be converted to uppercase
 *
 * Return: str
 *
 */

char *string_toupper(char *str)
{
	char *p = str;

	while (*p != '\0')
	{
	if (*p >= 'a' && *p <= 'z')
	{
	*p = *p - 'a' + 'A';
	}
	p++;
	}
	return (str);
}
