#include "hash_tables.h"
/**
 * hash_table_delete - Delete a hash table.
 * @ht: Pointer to hash table.
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *head = NULL, *temp_node = NULL;
	unsigned long int i;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		head = ht->array[i];
		while (head)
		{
			free(head->value);
			free(head->key);
			temp_node = head;
			head = head->next;
			free(temp_node);
		}
	}
	free(ht->array);
	free(ht);
}
