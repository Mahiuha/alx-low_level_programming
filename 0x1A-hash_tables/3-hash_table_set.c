#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hashs table I want to add or update the key/value to
 * @key: is the str passed to djb2 (tha key )
 * @value: value associated with the key
 * Return: 1 if succeeded or 0 if fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *hash_nodes;
	hash_node_t *new_node;
	unsigned long int index;

	if (!ht || !key)
		return (0);
	/* first I need to know where must be indexed the new node in the ht */
	index = key_index((const unsigned char *)key, ht->size);
	/* hashnodes points to the array of the ht with the respective idx */
	hash_nodes = ht->array[index];
	/* in case of key/value update */
	while (hash_nodes)
	{
		if (strcmp(hash_nodes->key, key) == 0)
		{
			/* delete the actual value in the hash table */
			free(hash_nodes->value);
			/* the passed value must be duplicated, task cond. */
			hash_nodes->value = strdup(value);
			if (hash_nodes->value == NULL)
				return (0);
			return (1);
		}
		hash_nodes = hash_nodes->next;
	}
	/* in case of adding a new node to the hash table */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	/* copy of key because is a constant and can assing it  */
	new_node->key = strdup(key);
	/* the passed value must be duplicated, task cond. */
	new_node->value = strdup(value);
	if (new_node->value == NULL)
		return (0);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
