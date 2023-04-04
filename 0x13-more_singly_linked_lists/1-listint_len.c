#include "lists.h"

/**
 * listint_len - a function that returns the number of
 * elements in a linked listint_t list.
 *
 * @h: pointer to the first node
 *
 * Return: number of elements in the list (number)
 */
size_t listint_len(const listint_t *h)
{
	Size_t number = 0;

	while (h)
	{
	number++;
	h = h->next;
	};
	return (number);
}
