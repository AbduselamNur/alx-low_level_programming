#include "hash_tables.h"
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tp;
	unsigned long int idx;

	if (ht == NULL || key == NULL)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	tp = ht->array[idx];

	if (tp == NULL)
		return (NULL);

	while (strcmp(tp->key, key) != 0)
		tp = tp->next;

	if (tp == NULL)
		return (NULL);

	return (tp->value);
}
