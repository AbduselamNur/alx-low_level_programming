#include "hash_tables.h"
/**
 * hash_table_set - a function that adds an element
 * @ht: hash table you want to add/update
 * @key: is the key
 *
 * @value: associated with the key
 * Return: 1 for success, else 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int ind;
	hash_node_t *new;
	hash_node_t *tmp;

	if (ht == NULL || key == NULL || value == NULL || strlen(key) == 0)
	{
		return (0);
	}
	ind = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[ind];

	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (1);
		}
		tmp = tmp->next;
	}
	new = malloc(sizeof(hash_node_t));

	if (new == NULL)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[ind];
	ht->array[ind] = new;

	return (1);
}
