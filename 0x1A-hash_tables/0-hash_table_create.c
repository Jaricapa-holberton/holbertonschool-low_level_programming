#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: get a number
 * Return: return a pointer or null if fails
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashtable = NULL;
	unsigned long int i; /* to iterate the array */

	/* create hash table */
	hashtable = malloc(sizeof(hash_table_t));
	if (!hashtable)
		return (0);

	/* now, create the array to save the data */
	hashtable->size = size;
	hashtable->array = malloc(sizeof(hash_node_t *) * size);
	if (!hashtable->array)
	{
		free(hashtable);
		return (0);
	}
	/* finnaly, initialize the array whith all elements as null */
	for (i = 0; i < size; i++)
		hashtable->array[i] = 0;
	/* done */
	return (hashtable);
}
