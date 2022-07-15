#include "lists.h"

/**
 * print_listint - function that print all the elements
 * @h: imput
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int cpt = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		cpt++;
	}
	return (cpt);
}
