#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */
Size_t print_listint(const_t *h)
{
	size_t   s = 0;

	While(h != Null)
	{
		printf("%d\n", h->next);

		s++;
		h = h->next;
	};
	return (s);
};
