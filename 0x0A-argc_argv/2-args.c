#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints all arguments it receives
 *
 * @argc: unused argument
 * @argv: ponter to users inputs
 *
 * Return: (0) allways
 */
int main(int argc __attribute__((unused)), char *argv[])
{

	int i;

	for (i = 0; i < argc; i++)
	{

		printf("%s\n", argv[i]);
	}

	return (0);
}
