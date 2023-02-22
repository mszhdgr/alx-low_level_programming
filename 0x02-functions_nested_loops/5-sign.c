#include "main.h"
/**
 * print_sign - prints the sign of a number
 *
 * This function takes a number as input and prints its sign, along with
 * a + or - sign, depending on whether the number is positive or negative.
 *
 * @n: The number to check
 *
 * Return: 1 if @n is positive, -1 if it is negative, and 0 otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n == 0)
	{
	_putchar('0');
	return (0);
	}
	else
	{
	_putchar('-');
	return (-1);
	}
}
