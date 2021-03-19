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
 * add_node_end - Add a new node at the end of a list_t list.
 * @head: Pointer to pointer head of the linked list.
 * @str: String of the node to add.
 * Return: The address of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i, l = 0;
	/* create new node */
	list_t *newnode = NULL;/*New node at the end*/
	list_t *cendnode = NULL;/*Currently end node*/

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
	for (i = 0; str[i] != '\0'; i++)
	{
		l++;
	}
	/* make a new node */
	newnode->str = strdup(str);
	/* check the length of the str asigned for every node*/
	newnode->len = i;
	/* prepare the new node, changing the next direction, like as a last node */
	newnode->next = NULL;
	/*Found a current last node*/
	if (*head == NULL)/*If the list are empty*/
	{
		*head = newnode;
		return (newnode);
	}
	/* iterate inside the linked list until the actual last node */
	/* for do that, a node will save the current las direction */
	for (cendnode = *head; cendnode->next != NULL;)
	{
		cendnode = cendnode->next;
	}
	/* assing the direction saved in cendnode to the newnode */
	cendnode->next = newnode;
	return (newnode);
}
