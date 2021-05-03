#include "lists.h"

/**
 * insert_dnodeint_at_index - Function that inserts a newnode node at a
 * given posnode.
 * @h: Double pointer with address to head of a double linked list.
 * @idx: The index of the list where the newnode node should be added.
 * @n: Content of the newnode node.
 * Return: The address of the newnode node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode = NULL;
	dlistint_t *temp;
	unsigned int posnode = 0;

	temp = *h;
	for (posnode = 0; temp || posnode == 0; posnode++, temp = temp->next)
	{
		if (posnode == idx)
		{
			if (posnode == 0) /* Head posnode */
				newnode = add_dnodeint(&(*h), n);
			else /* maybe medium posnode */
			{
				newnode = malloc(sizeof(dlistint_t));
				if (!newnode)
					return (NULL);
				newnode->n = n;
				(temp->prev)->next = newnode;
				newnode->prev = temp->prev;
				newnode->next = temp;
				temp->prev = newnode;
			}
			return (newnode);
		}
	}
	if (posnode == idx) /* Tail posnode */
		return (add_dnodeint_end(&(*h), n));
	return (NULL);
}
