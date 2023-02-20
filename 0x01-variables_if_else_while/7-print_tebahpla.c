#include <stdio.h>
/**
 * main -a program that prints rev alphabets in lowercase
 *
 * Return: (0) (successful)
 */
int main(void)
{
	char letter = 'z';

	while (letter <= 'a')
	{
	putchar(letter);
	letter++;
	}

	putchar('\n');

	return (0);
}
