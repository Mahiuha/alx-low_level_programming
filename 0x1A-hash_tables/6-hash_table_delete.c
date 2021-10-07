#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table I want to delete
 * Return: nothinng
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int x;
	hash_node_t *hash_nodes;
	hash_node_t *aux;

	if (!ht)
		return;

	for (x = 0; x < ht->size; x++)
	{
		hash_nodes =  ht->array[x];
		while (hash_nodes)
		{
			aux = hash_nodes;
			hash_nodes = hash_nodes->next;
			free(aux->key);
			free(aux->value);
			free(aux);
		}
	}
	free(ht->array);
	free(ht);
}
