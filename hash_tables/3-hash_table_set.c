#include "hash_tables.h"

/**
 * hash_table_set - add an element to the hash table
 * @ht: hash table
 * @key: position of element
 * @value: value of element
 * Return: 1 if it success , 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *tmp;
	hash_node_t *hash;
	unsigned int idx;

	if (ht == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);

	tmp = ht->array[idx];

	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (1);
		}
		tmp = tmp->next;
	}

	if (ht->array[idx] == NULL)
	{
		hash = malloc(sizeof(hash_node_t *));
		hash->key = strdup(key);
		hash->value = strdup(value);
		hash->next = NULL;
		ht->array[idx] = hash;
		return (1);
	}

	hash = malloc(sizeof(hash_node_t *));

	hash->key = strdup(key);
	hash->value = strdup(value);
	hash->next = ht->array[idx];
	ht->array[idx] = hash;
	return (1);
}
