#include "hash_tables.h"

/**
 * hash_table_print - a function that prints a hash table.
 * @ht: the hash table.
*/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long int i;
	unsigned int sep = 0;

	if (ht == NULL)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			if (sep != 0)
				printf(", ");

			printf("%s: %s", temp->key, temp->value);
			temp = temp->next;

			if (sep == 0)
				sep = 1;
		}
	}
	printf("}\n");
}
