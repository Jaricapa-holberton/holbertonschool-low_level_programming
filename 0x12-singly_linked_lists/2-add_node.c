#include "lists.h"
/**
 * _strlen - Count the length of a string.
 * @s: String.
 * Return: Length.
 */
int _strlen(char *s)
{
	int c;/*Counter of characters*/

	for (c = 0; s[c]; c++)
	{
		;
	}
	return (c);
}
/**
 * add_node - Add a new node at the beginning of a list_t list.
 * @head: Pointer to pointer head of the linked list.
 * @str: String of the node to add.
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	/* create new node */
	list_t *newnode = NULL;

	if (str == NULL)
	{
		return (NULL);
	}
	/* allocate memory for the new node */
	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	/* make a new node */
	newnode->str = strdup(str);
	/* when strdup fail free the new node */
	/* if (newnode->str == NULL) */
	/* { */
	/* free(newnode); */
	/* return (NULL); */
/* } */
	/* check the length of the str asigned for every node*/
	newnode->len = strlen(newnode->str);
	/* change the direction of the head node to the new node */
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
