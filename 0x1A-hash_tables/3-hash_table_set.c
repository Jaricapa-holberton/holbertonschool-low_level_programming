#include "hash_tables.h"
/**
 * add_node - Add a new node at the beginning of a linked_list in hash table.
 * @head: Pointer to pointer head of a linked_list in hash table.
 * @duply_value: Copy of string value of the element.
 * @key: Key of the element.
 * Return: The address of the new node, or NULL if it failed.
 */
hash_node_t *add_node(hash_node_t **head, char *duply_value, const char *key)
{
	hash_node_t *newnode;/*New node*/

	/*Allocate memory for a new node*/
	newnode = malloc(sizeof(hash_node_t));
	if (newnode == NULL)
	{
		free(duply_value);
		return (NULL);
	}
	/*Create a new node*/
	newnode->value = duply_value;
	newnode->key = strdup(key);
	if (!newnode->key)
	{
		free(duply_value);
		free(newnode);
		return (NULL);
	}
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
/**
 * hash_table_set - Adds an element inside a node to the hash table.
 * @ht: Head of hash table.
 * @key: Key of the element.
 * @value: Value of the element.
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index; /* Index of hash tables*/
	/* create head for the linked list inside the hash table */
	hash_node_t *temp_head_node;
	char *duply_value;
	/* check if parameters are wrong */
	if ((!ht) || (!key) || (!value))
		return (0);
	if (*key == '\0')
		return (0);
	/*Copy value*/
	duply_value = strdup(value);
	if (!duply_value)
		return (0);
	/*Find index*/
	index = key_index((const unsigned char *)key, ht->size);
	/* Asing in the postion of the hash table the head */
	temp_head_node = ht->array[index];
	/*check if key exists */
	/* if exist, update the value */
	for (; temp_head_node; temp_head_node = temp_head_node->next)
	{
		if (strcmp(temp_head_node->key, key) == 0)
		{
			free(temp_head_node->value);
			temp_head_node->value = duply_value;
			return (1);
		}
	}
	/*If key doesn't exist, just add the new node */
	temp_head_node = add_node(&(ht->array[index]), duply_value, key);
	if (!temp_head_node)
		return (0);
	else
		return (1);
}
