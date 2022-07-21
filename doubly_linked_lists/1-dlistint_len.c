#include "lists.h"

/**
 * dlistint_len - return number of element in list
 * @h: imput
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int cpt = 0;

	while (h)
	{
		h = h->next;
		cpt++;
	}
	return (cpt);
}
