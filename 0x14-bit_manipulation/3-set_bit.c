#include "main.h"

/**
 * set_bit - a function that sets the value of
 * a bit to 1 at a given index.
 *
 * @n: a bit_positionointer that checks the index
 *
 * @index: the index bit_positionosition to be changed starting from 0
 *
 * Return: 1 on success, -1 if there is an error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit_position;

	if (index > 64)
		return (-1);

	for (bit_position = 1; index > 0; index--, bit_position *= 2)
		;
	*n += bit_position;

	return (1);
}
