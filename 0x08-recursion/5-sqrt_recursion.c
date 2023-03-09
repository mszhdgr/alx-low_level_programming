#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number whose natural square root is to be found.
 *
 * Return: The natural square root of the number.
 *         -1 if n does not have a natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (0);

	return (find_sqrt(n, 1));
}

/**
 * find_sqrt - Finds the natural square root of a number using a recursive
 *             approach.
 * @n: The number whose natural square root is to be found.
 * @i: The possible root.
 *
 * Return: The natural square root of the number.
 *         -1 if n does not have a natural square root.
 */
int find_sqrt(int n, int i)
{
	if (i * i == n)
		return (i);

	if (i * i > n)
		return (-1);

	return (find_sqrt(n, i + 1));
}
