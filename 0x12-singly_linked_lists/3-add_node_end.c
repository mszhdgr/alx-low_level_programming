#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - a function that adds a new node
 * at the end of a list_t list.
 *
 * @head: a double pointer to the first node of the list
 *
 * @str: the string to add the new node
 *
 * Return: the memory address of the element, or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *temp = *head;
	unsigned int length = 0;

	while (str[length])
		length++;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->length = length;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new_node;

	return (new_node);
}
