#include <stdio.h>
#include "main.h"

/**
 * print_binary - a function that prints the binary
 * representation of a number.
 *
 * @n: the decimal no to be printed as binary
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int numToShift;
	int bitCount;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (numToShift = n, bitCount = 0; (numToShift >>= 1) > 0; bitCount++)
		;

	for (; bitCount >= 0; bitCount--)
	{
		if ((n >> bitCount) & 1)
			printf("1");
		else
			printf("0");
	}
}
