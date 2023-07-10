#include "hash_tables.h"
/**
 * hash_table_print - a function that print a hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned long int x;
	int tog;

	if (ht == NULL)
		return;

	printf("{");

	for (x = 0, tog = 0; x < ht->size; x++)
	{
		tmp = ht->array[x];
		if (tmp != NULL)
		{
			if (tog == 1)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			while ((tmp = tmp->next) != NULL)
			{
				printf(", ");
				printf("'%s': '%s'", tmp->key, tmp->value);
			}

			tog = 1;
		}
	}

	printf("}\n");
}
