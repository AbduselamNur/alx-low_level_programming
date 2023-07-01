#include "hash_tables.h"

/**
 * hash_table_set - Adds an element
 * @ht: pointer add to
 * @key: key pointer add
 * @value: value store to key
 * Return: 1 if success, 0 if fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newpair, *tmp;
	unsigned long int x;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	x = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[x];

	if (tmp != NULL)
	{
		while (tmp)
		{
			if (strcmp(tmp->key, key) == 0)
			{
				tmp->value = strdup(value);
				return (1);
			}
			tmp = tmp->next;
		}
	}

	newpair = malloc(sizeof(hash_node_t));
	if (newpair == NULL)
		return (0);

	newpair->key = strdup(key);
	newpair->value = strdup(value);
	newpair->next = NULL;

	if (ht->array[x] != NULL)
		newpair->next = ht->array[x];

	ht->array[x] = newpair;

	return (1);
}
