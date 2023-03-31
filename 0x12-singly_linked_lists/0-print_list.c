/**
 * print_list - a function that prints all the
 * elements of a list_t list
 * size_t: it rep the size of object in memory
 * list_t: is an alias to the structure in lists
 * @h: pointer rep the first node in the list
 *
 * Return: count
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
	if (h->str != NULL)
	{
	printf("[%u] %s\n", h->len, h->str);
	}
	else
	{
	printf("[0] (nil)\n");
	}
	h = h->next;
	count++;
	}
	return (count);
}
