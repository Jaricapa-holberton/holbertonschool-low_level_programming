#include "lists.h"
/**
 * insert_nodeint_at_index - Returns the new node inserted at a given index,
 * or NULL if index non-existent or failed to allocate memory.
 * @head: The list's head.
 * @idx: The index of the node to be inserted.
 * @n: The data of the node (a number).
 * Return: The new node inserted at index "idx" or NULL if idx non-existent or
 * failed to allocate memory.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	/* create a counter to compare position with the index */
	unsigned int counter;

	/* create nodes to do a new node and compare the position */
	listint_t *newnode, *cnode;

	/* alloc memory for the new node */
	newnode = malloc(sizeof(*newnode));
	/* check if exists memory for the new node*/
	if (newnode == NULL)
		return (NULL);
	/* update the value of n in the new node */
	newnode->n = n;
	/* check if the index is 0 to make that node as the first node */
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	/* save the values of the current node from head */
	cnode = *head;
	/* run inside the list to find the desired index */
	for (counter = 0; counter < idx - 1; counter++)
	{
		/* if fails */
		if (cnode == NULL)
		{
			free(newnode);
			return (NULL);
		}
		/* point the direction of the next node in the current node */
		cnode = cnode->next;
	}
	/* point to the direction of the new node to the current node */
	newnode->next = cnode->next;
	/* point to the direction of the current node to the next node */
	cnode->next = newnode;
	return (newnode);
}
