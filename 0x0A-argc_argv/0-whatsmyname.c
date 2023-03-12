#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints its name, followed by\n
 *
 * @argc: unused variable containing arg count
 * @argv: it prints the users arguments
 *
 * Return: (0) allways
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
