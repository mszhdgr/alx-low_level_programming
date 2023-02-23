#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
	if (i % 3 == 0 && i % 5 == 0) /* check if i is a multiple 5&3 */
	{
	printf("FizzBuzz "); /* print FizzBuzz */
	}
	else if (i % 3 == 0) /* check if i is a multiple of 3 */
	{
	printf("Fizz "); /* print Fizz */
	}
	else if (i % 5 == 0) /* check if i is a multiple of 5 */
	{
	printf("Buzz "); /* print Buzz */
	}
	else /* i is not a multiple of 3 or 5 */
	{
	printf("%d ", i); /* print i */
	}
	}

	printf("\n"); /* print new line */

	return (0);
}
