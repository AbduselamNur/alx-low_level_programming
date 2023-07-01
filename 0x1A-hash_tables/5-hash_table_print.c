#include "hash_tables.h"
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tp;
	unsigned long int i;
	int tog;

	if (ht == NULL)
		return;

	printf("{");

	for (i = 0, tog = 0; i < ht->size; i++)
	{
		tp = ht->array[i];
		if (tp != NULL)
		{
			if (tog == 1)
				printf(", ");
			printf("'%s': '%s'", tp->key, tp->value);
			while ((tp = tp->next) != NULL)
			{
				printf(", ");
				printf("'%s': '%s'", tp->key, tp->value);
			}

			tog = 1;
		}
	}

	printf("}\n");
}
