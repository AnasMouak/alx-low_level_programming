#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: table to retrieve value from
 * @key: key to find value
 *
 * Return: value associated with key, or NULL if key cannot be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current_node;
	unsigned long int index;

	index = key_index((const unsigned char *)key, ht->size);
	current_node = ht->array[index];
	if (current_node != 0)
	{
		if (strcmp(current_node->key, key) == 0)
		{
			return (current_node->value);
		} 
	}
	return (0);
}
