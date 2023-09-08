#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: the hash table you want to add or update the key/value to.
 * @key: the key. key can not be an empty string.
 * @value: the value associated with the key. value can be an empty string.
 *
 * Return: 1 (Success), 0 (Failed).
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	char *key_copy = strdup(key);
	char *value_copy = strdup(value);
	hash_node_t *temp, *new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	if (key_copy == NULL || value_copy == NULL)
	{
		free(new_node);
		free(key_copy);
		free(value_copy);
		return (0);
	}
	else
	{
		new_node->key = key_copy;
		new_node->value = value_copy;
		new_node->next = NULL;
	}

	temp = ht->array[index];

	while (temp != NULL)
	{
		if (strcmp(key, temp->key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (1);
		}
		temp = temp->next;
	}

	if (temp == NULL)
		ht->array[index] = new_node;
	else
	{
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}

	return (1);
}
