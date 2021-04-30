#include "lists.h"
/**
 * add_nodeint - Add a new node at the beginning of a listint_t list.
 * @head: get a pointer to pointer head of the linked list.
 * @n: get a integer number of the node to add.
 * Return: The address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	/* create new node */
	listint_t *newnode;

	/* allocate memory for the new node */
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	/* asing values to the new node */
	/* put the new int on the list */
	newnode->n = n;
	/* point the direction of head in next*/
	newnode->next = *head;
	/* update the direction of head for the next node */
	*head = newnode;

	return (newnode);
}
