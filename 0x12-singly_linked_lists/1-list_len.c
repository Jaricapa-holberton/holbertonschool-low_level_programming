#include "lists.h"
/**
 * list_len - Print all the elements of a linked list list_t.
 * @h: Pointer to linked list list_t.
 * Return: Return the number of nodes found.
 */
size_t list_len(const list_t *h)
{
	/* counter of nodes */
	size_t numnodes;

	for (numnodes = 0; h != NULL; numnodes++)
	{
		h = h->next;
	}
	return (numnodes);
}
