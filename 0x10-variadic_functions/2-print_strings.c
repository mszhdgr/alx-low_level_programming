#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - a function that prints strings,
 * followed by a new line.
 *
 * @separator: is the string to be printed between numbers
 * @n: is the number of integers passed to the function
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
	str = va_arg(args, char *);

	if (str == NULL)
	{
		printf("(nil)");
	}
	else
	{
		printf("%s", str);
	}

	if (i != n - 1 && separator != NULL)
	{
		printf("%s", separator);
	}
	}

	va_end(args);

	printf("\n");
}
