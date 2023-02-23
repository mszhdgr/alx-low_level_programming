#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This function prints the largest
 * prime factor of the number 612852475143
 *
 * Return: Always 0
 */
int main(void)
{
	long num = 612852475143;
	long factor = 2;
	long largest_factor = 1;

	while (num > 1)
	{
	if (num % factor == 0)
	{
	num /= factor;
	largest_factor = factor;
	}
	else
	{
	factor++;
	}
	}

	printf("%ld\n", largest_factor);

	return (0);
}
