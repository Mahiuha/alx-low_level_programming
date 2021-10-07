#include "hash_tables.h"
/**
 * hash_table_create - creates a hash tables
 * @size: the array (hash table) size
 * Return: a  pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ptr_to_array;

	if (size == 0)
		return (NULL);

	ptr_to_array = calloc(1, sizeof(hash_table_t));
	if (ptr_to_array == NULL)
		return (NULL);
	ptr_to_array->size = size;
	/* The  calloc()  function allocates memory for an array */
	/* void *calloc(size_t nmemb, size_t size) */
	ptr_to_array->array = calloc(size, sizeof(hash_table_t **));
	if (ptr_to_array->array == NULL)
	{
		free(ptr_to_array);
		return (NULL);
	}
	return (ptr_to_array);
}
