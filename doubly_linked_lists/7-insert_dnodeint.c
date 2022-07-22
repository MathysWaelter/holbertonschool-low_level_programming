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
	dlistint_t *node;
	dlistint_t *tmp = *h;

	if (tmp == NULL)
	{
		node = malloc(sizeof(dlistint_t));
		if (node == NULL)
			return (NULL);
		node->n = n;
		node->next = *h;
		node->prev = tmp;
		*h = node;
		return (node);
	}
	if (idx == 0)
	{
		node = malloc(sizeof(dlistint_t));
		if (node == NULL)
			return (NULL);
		node->n = n;
		node->next = *h;
		node->prev = tmp;
		*h = node;
		return (node);
	}
	while (idx != 1)
	{
		if (tmp->next == NULL)
			return (NULL);
		tmp = tmp->next;
		idx--;
	}
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = tmp->next;
	tmp->next = node;
	return (node);
}
