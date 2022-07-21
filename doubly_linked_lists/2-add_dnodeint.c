#include "lists.h"

/**
 * add_dnodeint - add a new node at the beginning
 * @head: beginning
 * @n: node
 * Return: adress of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	if (head != NULL)
	{
		node = malloc(sizeof(dlistint_t));
		if (node == 0)
		{
			free(node);
			return (NULL);
		}
		node->n = n;

		node->next = (*head);
		node->prev = NULL;

		if ((*head) != NULL)
			(*head)->prev = node;

		(*head) = node;
		return (node);
	}
	return (0);
}
