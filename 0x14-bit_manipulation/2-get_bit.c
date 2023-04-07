#include "main.h"
#include <stdio.h>
/**
 * get_bit -  a function that returns the value of a
 * bit at a given index.
 *
 * @n: the number that is used to evaluate
 * @index: the index starting from 0 containing the
 * bit we are looking for
 *
 * Return: Value of bit at index, or -1 when there is an error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int value;

	if (index > 64)
		return (-1);

	value = n >> index;

	return (value & 1);
}
