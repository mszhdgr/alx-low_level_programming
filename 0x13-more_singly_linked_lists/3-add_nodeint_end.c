#include "lists.h"

/**
 * add_nodeint_end - it adds a node at the end of a listint_t list
 * @head: double pointer to the head of the list
 * @n: integer value to be stored in the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_Node, *temp;

	if (head == NULL)
		return (NULL);

	new_Node = malloc(sizeof(listint_t));

	if (new_Node == NULL)
		return (NULL);

	new_Node->n = n;
	new_Node->next = NULL;

	if (*head == NULL)
	{
		*head = new_Node;
	}
	else
	{
	temp = *head;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new_Node;
	}

	return (new_Node);
}
