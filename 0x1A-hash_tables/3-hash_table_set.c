#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: hash table you want to add or update the key/value
 * @key: is the key. key can not be an empty string.
 * @value: is the value associated with the key.
 * value must be duplicated. value can be an empty string
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *item;
	unsigned long int index;
	hash_node_t *current_item;

	item = create_item(key, value);
	index = key_index(key, ht);
	current_item = ht->array[index];
	if (current_item == NULL)
	{
		if (ht->array == ht->size)
		{
			printf("Insert Error: Hash Table is full\n");
			free_item(item);
			return;
		}
		ht->array[index] = item;
		ht->array++;
	}
	else
	{
		if (strcmp(current_item->key, key) == 0)
		{
			strcpy(ht->array[index]->value, value);
			return;
		}
		else
		{
			handle_collision(ht, index, item);
			return;
		}
	}
}

/**
 * create_item - function to create a pointer to a new hash table item.
 * @key: is the key. key can not be an empty string.
 * @value: is the value associated with the key.
 * value must be duplicated. value can be an empty string
 * Return: item
 */
hash_node_t *create_item(const char *key, const char *value)
{
	hash_node_t *item = (hash_node_t*) malloc (sizeof(hash_node_t));
	item->key = (char*) malloc (strlen(key) + 1);
	item->value = (char*) malloc (strlen(value) + 1);

	strcpy(item->key, key);
	strcpy(item->value, value);

	return item;
}

/**
 * handle_collision - function to create a pointer to a new hash table item.
 * @ht: hash table you want to add or update the key/value.
 * @item: item to handle collision.
 * value must be duplicated. value can be an empty string
 * Return: item
 */
void handle_collision(hash_table_t *ht, unsigned long index, hash_node_t *item)
{

}
