#include "lists.h"
/**
 * insert_nodeint_at_index - a function that inserts a new
 * node at a given position.
 *
 * @head: a double pointer to the head node of the linked list.
 * @idx: the Index of position where the new node should be added
 * starting from 0.
 * @n: the data (n) to be stored in the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *tmp = *head;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	while (tmp != NULL)
	{
	if (i == idx - 1)
	{
		new->next = tmp->next;
		tmp->next = new;
		return (new);
	}

	i++;
	tmp = tmp->next;
	}

	free(new);
	return (NULL);
}
