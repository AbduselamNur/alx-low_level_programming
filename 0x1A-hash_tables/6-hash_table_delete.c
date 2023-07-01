#include "hash_tables.h"
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp, *temp2;
	unsigned long int x = 0;

	if (ht == NULL)
		return;

	for (x = 0; x < ht->size; x++)
	{
		temp = ht->array[x];
		while (temp != NULL)
		{
			temp2 = temp->next;
			free(temp->key);
			free(temp->value);
			free(temp);
			temp = temp2;
		}
	}
	free(ht->array);
	free(ht);
}
