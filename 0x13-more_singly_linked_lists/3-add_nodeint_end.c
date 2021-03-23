#include "lists.h"
/**
 * add_nodeint_end - Add a new node at the end of a listint_t list.
 * @head: Pointer to pointer head of the linked list.
 * @n: Integer number of the node to add.
 * Return: The address of the new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode = NULL;/*New node at the end*/
	listint_t *cendnode = NULL;/*Currently end node*/

	/* allocate memory for the new node */
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	/* asing values for the new node */
	newnode->n = n;
	newnode->next = NULL;
	/* in case there no exits another nodes */
	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	/* find the current last node */
	for (cendnode = *head; cendnode->next != NULL;)
	{
		cendnode = cendnode->next;
	}
	/* update the poiting direction of the current last node to the new node */
	cendnode->next = newnode;
	return (cendnode);
}
