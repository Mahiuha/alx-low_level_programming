#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: is the hash table I want to look into
 * @key: is the key I'm looking for in the hash table
 * Return: the value associated with the key or NULL if key is not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *hash_nodes = NULL;

	if (!ht || !key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	hash_nodes = ht->array[index];
	while (hash_nodes != NULL)
	{
		/* if the passed key is in the hash table*/
		/* return the value in in the found key on the hash table */
		if (strcmp(hash_nodes->key, key) == 0)
			return (hash_nodes->value);
		/* otherwise keeps looking */
		hash_nodes = hash_nodes->next;
	}
	/* if the index is not found cuz the ley doesn't exists */
	return (NULL);
}
