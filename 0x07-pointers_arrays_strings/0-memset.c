#include "main.h"

/**
 * _memset - Fills memory with a constant byte
 *
 * @s: Pointer to memory area to fill
 * @b: Constant byte to fill memory with
 * @n: Number of bytes to fill with constant byte
 *
 * Return: Pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	/* Use a for loop to iterate through the memory area */
	for (i = 0; i < n; i++)
	{
	/* Set each byte in the memory area to the constant byte b */
	s[i] = b;
	}

	/* Return a pointer to the memory area */
	return (s);
}
