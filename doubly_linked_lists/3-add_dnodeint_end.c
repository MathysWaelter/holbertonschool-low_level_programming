
#include "lists.h"

/**
 * add_dnodeint_end - add a new node at the beginning
 * @head: beginning
 * @n: node
 * Return: adress of the new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node;
	dlistint_t *tail = *head;

	if (head != NULL)
	{
		node = malloc(sizeof(dlistint_t));
		if (node == 0)
		{
			free(node);
			return (NULL);
		}
		node->n = n;

		node->next = NULL;

		if ((*head) == NULL)
		{
			node->prev = NULL;
			(*head) = node;
			return (0);
		}

		while (tail->next != NULL)
			tail = tail->next;

		tail->next = node;

		node->prev = tail;

		return (node);
	}
	return (0);
}
