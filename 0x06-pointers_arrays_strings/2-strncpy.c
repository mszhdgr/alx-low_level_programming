#include "main.h"

/**
 * _strncpy - a function that copies a string.
 *
 * @dest: pointer to a char variable
 * @src: pointer to copy files to dest
 *
 * @n: integer to store memory of src
 *
 * Return: dest
 */


char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
	dest[i] = src[i];
	}

	while (i < n)
	{
	dest[i] = '\0';
	i++;
	}

	return (dest);
}
