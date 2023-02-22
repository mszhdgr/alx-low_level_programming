#include "main.h"
/**
 * _islower - checks if a character is lowercase
 *
 * This function checks if a given character is a lowercase letter or not.
 *
 * @c: The character to check
 *
 * Return: 1 if @c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
