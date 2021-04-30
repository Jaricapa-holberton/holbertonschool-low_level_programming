#include "lists.h"
/**
 * get_dnodeint_at_index - Returns the node at the requested index.
 * @head: The list's head.
 * @index: The index of the requested node.
 * Return: The node at the requested index.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	/* create a counter to compare the position vs index */
	unsigned int counter;
	/* create a aux node to save the direction of the next node */
	dlistint_t *cnode;
	/* create a copy of head to not lose the head node */
	cnode = head;
	/* run trought a node dont exists */
	for (counter = 0; cnode; counter++)
	{
		/* check if the node exists */
		if (counter == index)
		{
			return (cnode);
		}
		cnode = cnode->next;
	}
	return (NULL);
}
