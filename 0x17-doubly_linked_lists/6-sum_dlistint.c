#include "lists.h"
/**
 * sum_listint - Returns the sum of the elements of all the nodes.
 * @head: The list's head.
 *
 * Return: The sum of the elements of all the nodes.
 */
int sum_listint(listint_t *head)
{
	/* create a aux var to save the sum */
	int sum;
	/* create a aux node to save the directions */
	listint_t *cnode;

	/* asing the direction of head to the aux node */
	cnode = head;
	/* run trough the list to get the sum */
	for (sum = 0; cnode != NULL;)
	{
		/* add the value on n to sum */
		sum += cnode->n;
		/* update the direction of cnode */
		cnode = cnode->next;
	}
	return (sum);
}
