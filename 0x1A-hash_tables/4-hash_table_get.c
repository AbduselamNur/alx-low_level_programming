#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated in a key
 * @ht: hash table you want to look
 * @key: the key you are looking for
 * Return: the value associated with the element/NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int ind;
	hash_node_t *tmpn;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (NULL);

	ind = key_index((const unsigned char *)key, ht->size);
	tmpn = ht->array[ind];
	while (tmpn != NULL)
	{
		if (strcmp(tmpn->key, key) == 0)
		{
			return (tmpn->value);
		}
		tmpn = tmpn->next;
	}
	return (NULL);
}
