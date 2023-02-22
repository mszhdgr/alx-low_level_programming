#include "main.h"
/**
 * print_alphabet_x10 - prints the lowercase alphabet 10 times
 *
 * This function prints the lowercase alphabet 10 times, with each set of
 * letters separated by a newline character.
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char c;
	int i;

	for (i = 0; i < 10; i++)
	{
	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
	}
}
