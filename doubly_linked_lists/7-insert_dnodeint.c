#include "lists.h"

/**
 * *insert_dnoeint_at_index - node a given position
 * @h: head
 * @idx: index
 * @n: value
 * Return adress
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{

	unsigned int i = idx;
	dlistint_t *node;
	dlistint_t *ptr = *h;

	if (ptr == NULL)
	{
		node = malloc(sizeof(dlistint_t));
		if (node == NULL)
			return (NULL);
		node->n = n;
		node->next = *h;
		*h = node;
		return (node);
	}
	if (i == 0)
	{
		node = malloc(sizeof(dlistint_t));
		if (node == NULL)
			return (NULL);
		node->n = n;
		node->next = *h;
		node->prev = ptr;
		*h = node;
		return (node);
	}
	while (i != 1)
	{
		if (ptr->next == NULL)
			return (NULL);
		ptr = ptr->next;
		i--;
	}
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = ptr->next;
	ptr->next = node;
	return (node);
}
