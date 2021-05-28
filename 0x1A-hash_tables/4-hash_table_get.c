#include "hash_tables.h"
/**
 * hash_table_get - Retrieve a value associated with a key.
 * @ht: Head of the hash table.
 * @key: Key of the element.
 * Return: The value associated with a key.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *get_node;

	/* check if parameters are wrong */
	if ((!ht) || (!key))
		return (NULL);
	if (*key == '\0')
		return (NULL);
	/* get the index to search in the table */
	index = key_index((const unsigned char *)key, ht->size);
	/* find key with in the index position */
	get_node = ht->array[index];
	for (; get_node; get_node = get_node->next)
		if (strcmp(get_node->key, key) == 0)
			return (get_node->value);
	return (NULL);
}
