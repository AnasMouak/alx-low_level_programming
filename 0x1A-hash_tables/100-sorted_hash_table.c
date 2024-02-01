#include "hash_tables.h"

/**
 * shash_table_create - creates a sorted hash table
 * @size: size of the hash table
 *
 * Return: pointer to the new table, or NULL on failure
 */

shash_table_t *shash_table_create(unsigned long int size)
{
    shash_table_t *table;
    unsigned long int i;

    table = malloc(sizeof(shash_table_t));
    if (table == 0)
    {
        return (0);
    }
    table->size = size;

    table->array = malloc(size * sizeof(shash_node_t *));
    if (table->array == 0)
    {
        free(table);
        return (0);
    }
    for (i = 0; i < size; i++)
    {
        table->array[i] = 0;
    }
    table->shead = NULL;
    table->stail = NULL;

    return (table);
}

/**
 * shash_node_insert - Inserts a node into the sorted linked list.
 * @ht: Pointer to the sorted hash table.
 * @new_node: Pointer to the new node to be inserted.
 */
void shash_node_insert(shash_table_t *ht, shash_node_t *new_node)
{
    shash_node_t *temp;

    if (ht->shead == NULL || strcmp(new_node->key, ht->shead->key) < 0)
    {
        new_node->snext = ht->shead;
        new_node->sprev = NULL;
        if (ht->shead != NULL)
        {
            ht->shead->sprev = new_node;
        }
        ht->shead = new_node;
        if (ht->stail == NULL)
            ht->stail = new_node;
    }
    else
    {
        temp = ht->shead;
        while (temp->snext != NULL && strcmp(new_node->key, temp->snext->key) > 0)
        {
            temp = temp->snext;
        }
        new_node->snext = temp->snext;
        new_node->sprev = temp;
        if (temp->snext != NULL)
        {
            temp->snext->sprev = new_node;
        }
        temp->snext = new_node;
        if (new_node->snext == NULL)
            ht->stail = new_node;
    }
}

/**
 * shash_node_create - Creates a new shash_node_t and initializes its fields.
 * @key: The key string.
 * @value: The value corresponding to the key.
 * Return: Pointer to the new node on success, NULL on failure.
 */
shash_node_t *shash_node_create(const char *key, const char *value)
{
    shash_node_t *new_node = malloc(sizeof(shash_node_t));
    if (new_node == NULL)
        return (NULL);

    new_node->key = strdup(key);
    if (new_node->key == NULL)
    {
        free(new_node);
        return (NULL);
    }

    new_node->value = strdup(value);
    if (new_node->value == NULL)
    {
        free(new_node->key);
        free(new_node);
        return (NULL);
    }

    new_node->next = NULL;
    new_node->sprev = NULL;
    new_node->snext = NULL;

    return new_node;
}

/**
 * shash_table_set - Inserts a key/value pair into the sorted linked list of a hash table.
 * @ht: Pointer to the sorted hash table.
 * @key: The key string.
 * @value: The value corresponding to the key.
 * Return: 1 on success, 0 on failure.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
    shash_node_t *new_node, *current_node, *prev_node = NULL;
    unsigned long int index;

    if (ht == NULL || key == NULL || *key == '\0')
        return (0);

    index = key_index((const unsigned char *)key, ht->size);
    current_node = ht->array[index];

    while (current_node != NULL && strcmp(current_node->key, key) < 0)
    {
        prev_node = current_node;
        current_node = current_node->next;
    }
    if (current_node != NULL && strcmp(current_node->key, key) == 0)
    {
        free(current_node->value);
        current_node->value = strdup(value);
        if (current_node->value == NULL)
            return (0);
        return (1);
    }
    new_node = shash_node_create(key, value);
    if (new_node == NULL)
        return (0);

    new_node->next = current_node;
    if (prev_node == NULL)
    {
        ht->array[index] = new_node;
    }
    else
    {
        prev_node->next = new_node;
    }

    shash_node_insert(ht, new_node);
    return (1);
}

/**
 * shash_table_get - retrieve a value from the hash table
 * @ht: hash table
 * @key: key to the data
 *
 * Return: the value associated with key, or NULL on failure
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *current_node;
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

/**
 * shash_table_print - prints a sorted hash table
 * @ht: hash table to print
 *
 * Return: void
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *tmp;
	char first_pair = 1;

	if (ht == 0 || ht->array == 0)
	{
		return;
	}
	printf("{");
	tmp = ht->shead;
	while (tmp != 0)
	{
		if (!first_pair)
		{
			printf(", ");
		}
		printf("'%s': '%s'", tmp->key, tmp->value);
		first_pair = 0;
		tmp = tmp->snext;
	}

	printf("}\n");
}

/**
 * shash_table_print_rev - prints a sorted hash table in reverse
 * @ht: hash table to print
 *
 * Return: void
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tmp;
	char flag = 0; 

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	tmp = ht->stail;
	while (tmp != NULL)
	{
		if (flag == 1)
			printf(", ");
		printf("'%s': '%s'", tmp->key, tmp->value);
		flag = 1;
		tmp = tmp->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes a sorted hash table
 * @ht: hash table to delete
 *
 * Return: void
 */

void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *current, *temp;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];

		while (current != NULL)
		{
			temp = current->next;
			free(current->key);
			free(current->value);
			free(current);
			current = temp;
		}
	}
	free(ht->array);
	free(ht);
}
