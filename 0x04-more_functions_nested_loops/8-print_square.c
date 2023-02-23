#include "main.h"
/**
 * print_square - prints a square of a given size using '#' characters.
 * @size: size of the square to be printed.
 * Return: void.
 */
void print_square(int size)
{
	int i, j;

	/* If size is less than or equal to 0, print a new line and return */
	if (size <= 0)
	{
	_putchar('\n');
	return;
	}

	/* Loop over each row of the square */
	for (i = 0; i < size; i++)
	{
	/* Loop over each column of the square */
	for (j = 0; j < size; j++)
	{
	/* Print the # character */
	_putchar('#');
	}
	/* Print a new line after each row */
	_putchar('\n');
	}
}
