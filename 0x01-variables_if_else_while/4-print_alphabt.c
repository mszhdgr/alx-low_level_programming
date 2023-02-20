#include <stdio.h>
/**
 * main -a program that print in lowercase except qe
 *
 * Return: (0) (success)
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
	if (letter != 'e' && letter != 'q')
	{
	putchar(letter);
	}
	letter++;
	}

	putchar('\n');

	return (0);
}
