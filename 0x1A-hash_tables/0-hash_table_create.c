#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 *
 * Return: pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i;

	table = malloc(sizeof(hash_table_t));
	if (table == 0)
	{
		return (0);
	}
	table->size = size;

	table->array = malloc(size * sizeof(hash_node_t *));
	if (table->array == 0)
	{
		free(table);
		return (0);
	}

	for (i = 0; i < size; i++)
	{
		table->array[i] = 0;
	}
	return (table);
}
