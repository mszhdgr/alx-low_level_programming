#include "main.h"

/**
 * reverse_array - it prints the rev of a string
 *
 * @a: pointer to a string to be reversed
 * @n: an integer that store the value of a
 *
 * Return: void
 *
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;

	while (i < j)
	{
	int temp = a[i];

	a[i] = a[j];
	a[j] = temp;
	i++;
	j--;
	}
}
