#include <stdio.h>
/**
 * main -a program that prints lowercase and upperletters
 *
 * Return: (o) (success)
 */
int main(void)
{
	char letter = 'a';

	/* Print lowercase alphabet */

	while (letter <= 'z')
	{
	putchar(letter);
	letter++;
	}
	letter = 'A';

	/* Print uppercase alphabet*/

	while (letter <= 'Z')
	{
	putchar(letter);
	letter++;
	}

	putchar('\n');

	return (0);
}
