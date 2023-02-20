#include <stdio.h>
/**
 * main -a program that prints rev alphabets in lowercase
 *
 * Return: (0) (successful)
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
	putchar(c);
	}
	putchar('\n');

	return (0);
}
