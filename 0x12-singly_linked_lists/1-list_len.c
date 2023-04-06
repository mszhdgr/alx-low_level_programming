#include <stdlib.h>
#include "lists.h"

/**
 * list_len - a function that returns the number of
 * elements in a linked list_t list.
 *
 * @h: a pointer to the list
 *
 * Return: all the elements in h
 */
size_t list_len(const list_t *h)
{
	size_t m = 0;

	while (h)
	{
		m++;
		h = h->next;
	}
	return (m);
}
