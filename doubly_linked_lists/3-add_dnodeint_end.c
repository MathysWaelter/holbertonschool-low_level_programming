
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
	dlistint_t *tail;

	if (head != NULL)
	{
		tail = *head;
		node = malloc(sizeof(dlistint_t));
		if (node == 0)
		{
			free(node);
			return (NULL);
		}
		node->n = n;

		node->next = NULL;
		node->prev = NULL;

		if ((*head) == NULL)
		{
			(*head) = node;
			return (NULL);
		}

		while (tail->next != NULL)
			tail = tail->next;

		node->prev = tail;
		tail->next = node;


		return (node);
	}
	return (0);
}
