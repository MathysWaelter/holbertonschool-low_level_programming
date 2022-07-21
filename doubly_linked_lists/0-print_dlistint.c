#include "lists.h"

/**
 * print_dlistint - prints all elements of a list
 * @h: imput
 * Return: cpt
 */

size_t print_dlistint(const dlistint_t *h)
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
