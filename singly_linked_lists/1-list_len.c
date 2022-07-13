
#include "lists.h"

/**
 * list_len - function that prints lenght of a singly linked list
 * @h: node pointer
 * Return: 0.
 */

size_t list_len(const list_t *h)
{
	int cpt = 0;

	while (h != NULL)
	{
		printf("%d\n", h->len);
		h = h->next;
		cpt++;
	}
	return (cpt);
}
