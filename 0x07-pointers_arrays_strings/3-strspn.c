#include "main.h"

/**
 * _strspn - a function that gets length of a prefix substring
 *
 * @s: pointer to funct getting string
 * @accept: pointer to get the string
 *
 * Return: bytes in s
 */


unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found;
	int i;

	while (*s != '\0')
	{
	found = 0;

	for (i = 0; accept[i] != '\0'; i++)
	{
		if (*s == accept[i])
		{
		count++;
		found = 1;
		break;
		}
	}

	if (!found)
	{
		break;
	}

	s++;
	}

	return (count);
}
