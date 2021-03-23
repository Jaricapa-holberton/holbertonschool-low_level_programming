#include "lists.h"
/**
 * get_nodeint_at_index - Returns the node at the requested index.
 * @head: The list's head.
 * @index: The index of the requested node.
 * Return: The node at the requested index.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	/* create a counter to compare the position vs index */
	unsigned int counter;
	/* create a aux node to save the direction of the next node */
	listint_t *cnode;
	/* create a copy of head to not lose the head node */
	cnode = head;
	/* run trought the list until the n position is found */
	for (counter = 0; counter != index; counter++)
	{
		/* check if the node exists */
		if (cnode == NULL)
		{
			return (NULL);
		}
		head = head->next;
	}
	return (cnode);
}
