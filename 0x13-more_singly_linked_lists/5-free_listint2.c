#include "lists.h"
/**
 * free_listint2 - Free a listint_t list.
 * @head: Pointer to pointer head of linked listint_t list.
 */
void free_listint2(listint_t **head)
{
	/* create a tail node wich get the next direction from the freeded node */
	listint_t *tailnode = NULL;
	/* go to every node and free them */
	/* because of the **head is requred deference the head */
	/* where deference it?, tailnode get the direction of head */
	for (tailnode = *head; *head != NULL;)
	{
		/* the tail get the direction of the next node */
		tailnode = tailnode->next;
		/* free the current node */
		free(*head);
		/* head will get the direction gatherertd of the previos node */
		*head = tailnode;
	}
	/* set head as null */
	*head = NULL;
}
