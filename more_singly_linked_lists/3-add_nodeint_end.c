#include "lists.h"

/**
 * *add_nodeint_end - function for add node
 * @head: list
 * @n: imput
 * Return: 0
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *temp;

	if (head != NULL)
	{

		node = malloc(sizeof(listint_t));
		if (node == 0)
		{
			free(node);
			return (NULL);
		}

		node->n = n;
		node->next = NULL;

		if (*head == NULL)
		{
			*head = node;
			return (node);
		}
		temp = *head;

		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = node;
		return (node);
	}
	return (0);
}
