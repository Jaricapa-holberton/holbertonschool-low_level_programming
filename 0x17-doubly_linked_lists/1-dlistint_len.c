#include "lists.h"
/**
 * listint_len - Return the number of elements in a linked listint_t list.
 * @h: Pointer to listint_t.
 * Return: The number of elements in a linked list_t list.
 */
size_t listint_len(const listint_t *h)
{
	size_t counter = 0; /* count the number of nodes */
	/* loop for go through all the nodes */
	for (counter = 0; h != NULL; counter++)
	{
		h = h->next;/* update the adress of "h" and go */
	}
	return (counter);
}
