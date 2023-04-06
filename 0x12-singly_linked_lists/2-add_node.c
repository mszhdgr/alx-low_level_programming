#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - a function that adds a new node at
 * the beginning of a list_t list.
 *
 * @head: double pointer to the first node of the list.
 *
 * @str: the string to add in the node
 *
 * Return: address of the new elements, or NULL on failure
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int length = 0;

	while (str[length])
		length++;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = length;
	new_node->next = (*head);
	(*head) = new_node;

	return (*head);
}
