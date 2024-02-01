#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table to print
 *
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned int long i;
	int first_pair = 1;

	if (ht == 0)
	{
		return;
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			if (!first_pair)
			{
				printf(", ");
			}
		printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
		first_pair = 0;
		}
	}
	printf("}\n");
}
