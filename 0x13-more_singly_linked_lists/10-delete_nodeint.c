#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes a node at a given index. Returns
 * 1 if success, -1 if failure.
 * @head: The list's head.
 * @index: The index of the node to be deleted.
 * Return: 1 if success, -1 if failure.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int counter;
	listint_t *cnode, *tmp;

	cnode = *head;
	/* check if the current node exists */
	if (cnode == NULL)
		return (-1);
	/* check if the index is 0 to convert the current as the head */
	if (index == 0)
	{
		cnode = (*head)->next;
		free(*head);
		*head = cnode;
	}
	else
	{
		/* run inside the list until the n position */
		for (counter = 0; counter < index - 1; counter++)
		{
			/* if fails end the program */
			if (cnode == NULL)
				return (-1);
			/* point the current directory to the next */
			cnode = cnode->next;
		}
		/* point the aux to the next node and free it */
		tmp = cnode->next;
		cnode->next = tmp->next;
		free(tmp);
	}
	return (1);
}
