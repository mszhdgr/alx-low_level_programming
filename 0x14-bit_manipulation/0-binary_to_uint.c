#include "main.h"
#include <string.h>
/**
 * binary_to_uint - a function that converts a binary
 * number to an unsigned int
 *
 * @b: a pointer to a character array to be converted
 *
 * Return: the converted value or Null if arguments is not 1 or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result, bit;
	int len;

	if (b == NULL)
		return (0);

	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}

	for (bit = 1, result = 0, len--; len >= 0; len--, bit *= 2)
	{
		if (b[len] == '1')
			result += bit;
	}

	return (result);
}
