#include "lists.h"

/**
 * add_nodeint - it  adds a new node at the start of a listint_t list
 * @head: it is a double pointer to the head of the list
 * @n: an integer value to be stored in the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_value;

	new_value = malloc(sizeof(listint_t));
	if (!new_value)
		return (NULL);

	new_value->n = n;
	new_value->next = *head;
	*head = new_value;

	return (new_value);
}
