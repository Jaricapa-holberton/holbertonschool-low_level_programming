#include "lists.h"
/**
 * free_list - Free a list_t list.
 * @head: Head of linked list_t list.
 */
void free_list(list_t *head)
{
	/* create a new node to be the new last node */
	/* and reemplace the rest of the list */
	list_t *tail = NULL;
	/* for this node, save the adress of head to cut the list */
	for (tail = head; head != NULL;)
	{
		tail = head->next;
		/* free memory of the menbers of the structure */
		free(head->str);
		/* free head */
		free(head);
		/* head will save the values of tail for end the liberation */
		head = tail;
	}
}
