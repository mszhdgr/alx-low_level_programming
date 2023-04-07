#include <stdio.h>
#include "main.h"
/**
 * clear_bit - a function that sets the value of a
 * bit to 0 at a given index.
 *
 * @n: a pointer to the number to be change changed
 * @index: the position to be changed
 *
 * Return: 1 on success -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;
	unsigned int bit_position;

	if (index > 64)
		return (-1);
	bit_position = index;
	for (i = 1; bit_position > 0; i *= 2, bit_position--)
		;

	if ((*n >> index) & 1)
		*n -= i;

	return (1);
}
