#include "lists.h"
/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: Get a pointer to linked list listint_t.
 * Return: Return the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t counter = 0; /* count the number of nodes */
	/* loop for go through all the nodes */
	for (counter = 0; h != NULL; counter++)
	{
		printf("%d\n", h->n); /* search the data in "n" inside of h */
		h = h->next; /* in the end, update the adress of "h" and go */
	}
	return (counter);
}
