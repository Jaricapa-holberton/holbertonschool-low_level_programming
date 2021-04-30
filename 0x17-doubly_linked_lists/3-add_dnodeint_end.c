#include "lists.h"
/**
 * add_dnodeint_end - Add a new node at the end of a listint_t list.
 * @head: Pointer to pointer head of the linked list.
 * @n: Integer number of the node to add.
 * Return: The address of the new element.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode = NULL;/*New node at the end*/
	dlistint_t *cendnode = NULL;/*Currently end node*/

	/* allocate memory for the new node */
	newnode = malloc(sizeof(dlistint_t));
	/* check if fail to allocate */
	if (newnode == NULL)
		return (NULL);
	/* asing values for the new node */
	newnode->n = n;
	newnode->next = NULL;
	newnode->prev = NULL;
	/* in case there no exits another nodes */
	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	/* iterate as long as a node exists */
	for (cendnode = *head; cendnode->next;)
		cendnode = cendnode->next;
	/* update the poiting direction of the current last node to the new node */
	newnode->prev = cendnode;
	cendnode->next = newnode;
	return (cendnode);
}
