#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 * @size: size of the hash table.
 *
 * Return: on success, a pointer to the new hash table.
 * otherwise returns NULL.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i;
	hash_table_t *table;

	table = (hash_table_t *)malloc(sizeof(hash_table_t));
	table->size = size;
	table->array = (hash_node_t **)calloc(table->size, sizeof(hash_node_t *));
	for (i = 0; i < table->size; i++)
	{
		table->array[i] = NULL;
	}
	return (table);
}
