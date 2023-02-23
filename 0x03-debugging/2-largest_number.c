#include "main.h"

/**
 * largest_number - finds the largest integer among three integers
 * @a: the first integer
 * @b: the second integer
 * @c: the third integer
 *
 * Return: the largest integer
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
	{
	largest = a;
	}
	else if (b >= a && b >= c)
	{
	largest = b;
	}
	else
	{
	largest = c;
	}

	return (largest);
}
