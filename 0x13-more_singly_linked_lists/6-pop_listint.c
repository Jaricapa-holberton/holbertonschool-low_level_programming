#include "lists.h"
/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: Pointer to pointer head of linked list.
 * Return: The head nodes data (n).
 */
int pop_listint(listint_t **head)
{
	/* create a aux var and a node */
	int datanode;
	listint_t *newnode;
	/* check if exists memory */
	if (*head == NULL)
	{
		return (0);
	}
	/* save value of the node in aux var */
	datanode = (*head)->n;
	/* free the actual head */
	/* asing the direction of the new node to head */
	newnode = *head;
	/* update direction of head to the next node */
	*head = (*head)->next;
	/* free node */
	free(newnode);
	/* return the data on node */
	return (datanode);
}
