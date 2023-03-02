#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 *
 * @dest: pointer to the destination string
 * @src: pointer to the source string to be appended to dest
 *
 * @p - pointer to dest and src
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*p != '\0')
	{
	p++;
	}
	while (*src != '\0')
	{
	*p = *src;
	p++;
	src++;
	}
	*p = '\0';
	return (dest);
}
