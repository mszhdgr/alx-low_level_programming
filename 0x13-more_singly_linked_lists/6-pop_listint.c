#include "lists.h"
/**
 * pop_listint - a function that deletes the head node of a
 * listint_t linked list, and returns the head node’s data (n)
 *
 * @head: the Pointer to the first node of the linked list.
 *
 * Return: integer (n) of the deleted head node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (head == NULL || *head == NULL)
	return (0);

	tmp = *head;
	n = tmp->n;
	*head = (*head)->next;
	free(tmp);

	return (n);
}
