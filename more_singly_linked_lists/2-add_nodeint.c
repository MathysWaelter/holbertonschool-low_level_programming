#include "lists.h"

/**
 * *add_nodeint - function for add node
 * @head: list
 * @n: imput
 * Return: 0
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	if (head != NULL)
	{

		node = malloc(sizeof(listint_t));
		if (node == 0)
		{
			free(node);
			return (NULL);
		}
		node->n = n;
		node->next = *head;
		*head = node;
		return (node);
	}
	return (0);
}
