#include "lists.h"

/**
 * print_list - function that prints all the elements of a singly linked list
 * @h: node pointer
 * Return: 0.
 */

size_t print_list(const list_t *h)
{
	int cpt = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
			cpt++;
		}
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		cpt++;
	}
	return (cpt);
}
