#include "lists.h"
/**
 * sum_listint - a function that returns the sum of a
 * given data represented by (n) of a singly linked list.
 *
 * @head: a Pointer to the first node of the singly linked list.
 *
 * Return: the Sum of the data (n) in the list, or (0) if the list is empty.
 */
int sum_listint(listint_t *head)
{
	int add = 0;

	while (head != NULL)
	{
		add += head->n;
		head = head->next;
	}

	return (add);
}
