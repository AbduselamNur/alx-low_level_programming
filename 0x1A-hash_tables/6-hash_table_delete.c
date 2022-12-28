#include "hash_tables.h"

/**
  * hash_table_delete - deletes a ht
  * @ht: hash table.
  */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *t, *t2;
	unsigned long int x = 0;

	if (ht == NULL)
		return;

	for (x = 0; x < ht->size; x++)
	{
		t = ht->array[x];
		while (t != NULL)
		{
			t2 = t->next;
			free(t->key);
			free(t->value);
			free(t);
			t = t2;
		}
	}
	free(ht->array);
	free(ht);
}
