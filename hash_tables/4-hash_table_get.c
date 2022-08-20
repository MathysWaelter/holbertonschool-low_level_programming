#include "hash_tables.h"

/**
 * *hash_table_get - retrieves a value associated with the key
 * @ht: pointer of hash table
 * @key: popstion of a
 * Return: NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *tmp;

	idx = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[idx];

	if (ht->array == NULL || ht->size == 0 || key == NULL ||
	 strlen(key) == 0 || ht == NULL)
		return (NULL);

	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}
