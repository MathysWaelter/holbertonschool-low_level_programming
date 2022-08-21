#include "hash_tables.h"

/**
 * hash_table_print - print hash table
 * @ht: pointer hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned int idx;
	unsigned int i = 0;

	if (ht == NULL)
		return;

	printf("{");

	for (idx = 0; idx < ht->size; idx++)
	{
		tmp = ht->array[idx];

		while (tmp)
		{
			if (i == 1)
				printf(", ");

			printf("'%s': '%s'", tmp->key, tmp->value);
			tmp = tmp->next;

			i = 1;
		}
	}
	printf("}\n");
}
