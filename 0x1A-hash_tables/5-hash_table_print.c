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
	hash_node_t *tmp;
	char first_pair = 0;

	if (ht == 0 || ht->array == 0)
	{
		return;
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp != 0)
		{
			if (first_pair == 1)
			{
				printf(", ");
			}
		printf("'%s': '%s'", tmp->key, tmp->value);
		first_pair = 1;
		tmp = tmp->next;
		}
	}
	printf("}\n");
}
