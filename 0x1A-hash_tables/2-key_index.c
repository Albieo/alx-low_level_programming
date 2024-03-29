#include "hash_tables.h"

/**
 * key_index - a function that gives you the index of a key.
 * @key: the key
 * @size:the size of the array in the hash table.
 *
 * Return: the index at which the key/value pair should be stored.
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index, value = hash_djb2(key);

	index = value % size;

	return (index);
}
