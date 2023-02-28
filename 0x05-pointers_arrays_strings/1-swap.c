# include "main.h"

/**
 * swap_int - a function that swaps the values
 * of two integers
 *
 * @a: pointer to integer
 * @b: pointer to an integer
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{

	int temp = *a;

	*a = *b;
	*b = temp;

}
