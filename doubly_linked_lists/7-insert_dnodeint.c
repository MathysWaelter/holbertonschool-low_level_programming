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

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;

	if (idx == 0 || tmp == NULL)
	{
		node->next = *h;
		if (*h != NULL)
			(*h)->prev = node;
		node->prev = NULL;
		*h = node;
		return (node);
	}
	while (idx != 1)
	{
		if (tmp == NULL)
			return (NULL);
		tmp = tmp->next;
		idx--;
	}
	node->next = tmp->next;
	if (tmp->next != NULL)
	{
		node->prev = tmp->next->prev;
		tmp->next->prev = node;
	}
	return (node);
}
