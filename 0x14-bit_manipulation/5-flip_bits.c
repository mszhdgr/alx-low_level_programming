#include "main.h"
#include <stdio.h>

/**
 * flip_bits - a function that returns the number of bits you
 * would need to flip to get from one number to another.
 *
 * @n: the first no
 * @m: the second no to convert to
 *
 * Return: number of bits that was needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip_result;
	int flip_count;

	flip_result = n ^ m;
	flip_count = 0;

	while (flip_result)
	{
		flip_count++;
		flip_result &= (flip_result - 1);
	}

	return (flip_count);
}
