#include "lists.h"
/**
 * get_nodeint_at_index - Returns the node at the requested index.
 * @head: The list's head.
 * @index: The index of the requested node.
 *
 * Return: The node at the requested index.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	/* create a counter to compare the position vs index */
	unsigned int counter;

	/* check if the head exists */
	if (head == NULL)
	{
		return (NULL);
	}
	/* run trought the list until the n position is found */
	for (counter = 0; counter != index; counter++)
	{
		head = head->next;
	}
	return (head);
}
