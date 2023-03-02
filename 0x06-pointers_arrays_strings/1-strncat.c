#include "main.h"

/**
 * _strncat - Concatenates two strings, using at most n bytes from src
 *
 * @dest: Pointer to the destination string
 * @src: Pointer to the source string to be appended to dest
 * @n: Maximum number of bytes to be used from src
 *
 * Return: Pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *p = dest;
	int dest_len = 0;

	/* Find the length of the destination string */
	while (*p != '\0')
	{
	dest_len++;
	p++;
	}

	/* Append at most n bytes from src to dest */
	p = dest + dest_len;
	while (n-- > 0 && *src != '\0')
	{
	*p++ = *src++;
	}

	/* Add a null terminator to the end of the string */
	*p = '\0';

	return (dest);
}
