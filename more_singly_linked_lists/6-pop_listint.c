#include "lists.h"

/**
 * pop_listint - delete last head node
 * @head: last node
 * Return: x
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int x;

	if (*head == NULL)
		return (0);

	temp = (*head)->next;
	x = (*head)->n;

	free(*head);

	*head = temp;
	return (x);
}
