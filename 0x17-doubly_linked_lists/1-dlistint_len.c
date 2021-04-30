#include "lists.h"
/**
 * dlistint_len - Return the number of elements in a linked listint_t list.
 * @h: Pointer to listint_t.
 * Return: The number of elements in a linked list_t list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0; /* count the number of nodes */
	/* iterate as long as a node exists */
	for (counter = 0; h; counter++)
	{
		h = h->next;/* update the adress of "h" and go */
	}
	return (counter);
}
