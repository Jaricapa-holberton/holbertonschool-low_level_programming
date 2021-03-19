#include "lists.h"
/**
 * print_list - Print all the elements of a linked list list_t.
 * @h: Pointer to linked list list_t.
 * Return: Return the number of nodes found.
 */
size_t print_list(const list_t *h)
{
	/* counter of nodes */
	size_t numnodes;

	for (numnodes = 0; h != NULL; numnodes++)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	return (numnodes);
}
