#include "main.h"
/**
 * _isalpha - checks if a character is an alphabetic character
 *
 * This function checks if a given character is a letter, either uppercase
 * or lowercase.
 *
 * @c: The character to check
 *
 * Return: 1 if @c is an alphabetic character, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
	return (1);
	}
	return (0);
}
