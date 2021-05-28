#include "hash_tables.h"
/**
 * hash_table_print - Print a hash table.
 * @ht: Pointer to the hash table.
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *head = NULL;
	char *separator = "";

	if (!ht)
		return;
	else
	{
        /* open the list */
		printf("{");
        /* show the content of the list */
		for (i = 0; i < ht->size; i++)
		{
			head = ht->array[i];
			for (; head; head = head->next)
			{
				printf("%s'%s': '%s'", separator, head->key, head->value);
				separator = ", ";
			}
		}
		printf("}\n");
	}
    return;
}