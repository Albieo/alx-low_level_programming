#include "hash_tables.h"

/**
 * hash_table_delete - a function that deletes a hash table.
 * @ht: the hash table.
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp, *next_node;
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			next_node = temp->next;
			free(temp->key);
			free(temp->value);
			free(temp);
			temp = next_node;
		}
	}
	free(ht->array);
	free(ht);
}