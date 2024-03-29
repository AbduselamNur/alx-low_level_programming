#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: the size of array
 * Return: new pointer
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_t;
	unsigned long int x;

	hash_t = malloc(sizeof(hash_table_t));
	if (hash_t == NULL)
	{
		return (NULL);
	}

	hash_t->size = size;
	hash_t->array = malloc(sizeof(hash_table_t *) * size);
	if (hash_t->array == NULL)
	{
		free(hash_t);
		return (NULL);
	}
	for (x = 0; x < size; x++)
	{
		hash_t->array[x] = NULL;
	}
	return (hash_t);
}
