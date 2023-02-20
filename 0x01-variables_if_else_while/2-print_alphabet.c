#include <stdio.h>
/**
 * main -a program that prints alphabets in lowercase
 *
 * Return: (0) (successful)
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
	putchar(letter);
	letter++;
	}

	putchar('\n');

	return (0);
}
