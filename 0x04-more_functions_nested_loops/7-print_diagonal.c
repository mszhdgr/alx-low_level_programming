#include "main.h"
/**
 * print_diagonal - prints a diagonal line in the terminal
 * @n: the number of times the '\' character should be printed
 *
 * Return: void
 */
void print_diagonal(int n)
{
	/* if n is less than or equal to 0, only print a new line */
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		/* loop through n rows */
		for (i = 0; i < n; i++)
		{
			/* loop through i spaces */
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			/* print the '\' character */
			_putchar('\\');
			/* print a new line */
			_putchar('\n');
		}
	}
}
