#include <stdio.h>
#include <stdlib.h>
/**
 * list_len -  a function that returns the number
 * of elements in a linked list_t
 *
 * @h: pointer to the first node
 *
 * Return: s
 */
size_t list_len(const list_t *h)
{
	size_t s = 0;

	while (h != NULL)
	{
	s++;
	h = h->next;
	}

	return (s);
}
