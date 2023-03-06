#include "main.h"
/**
 * _memcpy - copies n bytes from
 * memory area src to memory area dest
 *
 * @dest: a pointer to the destination memory area
 * @src:  a pointer to the source memory area
 * @n: and the number of bytes to copy
 *
 * Return: desk
 */


char *_memcpy(char *dest, char *src, unsigned int n)
{
	/* Create a pointer to the destination memory area*/
	char *dest_ptr = dest;
	unsigned int i;

	/* Loop through n bytes of the source memory area*/
	for (i = 0; i < n; i++)
	{
	/* Copy the current byte from the source to the destination*/
	*dest_ptr++ = *src++;

	/* Note: *dest_ptr++ is shorthand for:*/
	/* *dest_ptr = *src;*/
	/* dest_ptr++;*/
	/* src++;*/
	}

	/* Return a pointer to the start of the destination memory area */
	return (dest);
}
