#include "hash_tables.h"

/**
 * hash_table_create - a hash table
 * @size: size - array
 * Return: new hash
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hsh;
	unsigned long int x;

	if (size == 0)
		return (NULL);

	hsh = malloc(sizeof(hash_table_t));
	if (hsh == NULL)
		return (NULL);

	hsh->array = malloc(sizeof(hash_node_t *) * size);
	if (hsh->array == NULL)
	{
		free(hsh);
		return (NULL);
	}
	hsh->size = size;

	for (x = 0; x < size; x++)
		hsh->array[x] = NULL;

	return (hsh);
}
