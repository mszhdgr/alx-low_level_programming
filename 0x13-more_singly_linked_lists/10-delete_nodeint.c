#include "lists.h"
/**
 * delete_nodeint_at_index - a function that deletes the node at
 * index (index) of a listint_t linked list
 *
 *
 * @head: a double pointer to the head node of the linked list.
 * @index: the index of the position of the node to be
 * deleted, beginning from 0.
 *
 * Return: 1 on success, -1 on failure.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *previous = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	current = *head;

	if (index == 0)
	{
		*head = current->next;
		free(current);

		return (1);
	}

	while (current != NULL && i != index)
	{
		previous = current;
		current = current->next;
		i++;
	}

	if (current == NULL)
		return (-1);

	previous->next = current->next;
	free(current);

	return (1);
}
