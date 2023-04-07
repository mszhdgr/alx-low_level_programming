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
	size_t length = strlen(b);
	unsigned int answer = 0;
	unsigned int bit = 1;
	int i;

	if (b == NULL)
	{
		return (0);
	}

	for (i = length - 1; i >= 0; i--)
	{
		if (b[i] == '1')
		{
			answer += bit;
		}
		else if (b[i] != '0')
		{
			return (0);
		}
		bit <<= 1;
	}
	return (answer);
}

