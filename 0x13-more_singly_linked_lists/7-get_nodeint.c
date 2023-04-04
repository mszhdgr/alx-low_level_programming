#include "lists.h"
/**
 * get_nodeint_at_index - a function that Returns the
 * nth node of a singly linked list.
 *
 * @head: Pointer to the first node of the singly linked list.
 * @index: Index of the node which starts at 0.
 *
 * Return: a Pointer to the nth node, or NULL if the node does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp = head;
	unsigned int i = 0;

	while (tmp != NULL)
	{
	if (i == index)
		return (tmp);

	i++;
	tmp = tmp->next;
	}

	return (NULL);
}
