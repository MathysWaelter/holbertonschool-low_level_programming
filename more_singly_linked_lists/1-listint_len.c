
#include "lists.h"

/**
 * listint_len - function that print lenght
 * @h: imput
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	int cpt = 0;

	while (h)
	{
		h = h->next;
		cpt++;
	}
	return (cpt);
}
