#include "lists.h"

/**
 * *get_dnodeint_at_index - return the nth node at index pos.
 * @head: imput
 * @index: position
 * Return: 0.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int temp;

	for (temp = 0; temp < index; temp++)
	{
		if (head == NULL)
		{
			return (NULL);
		}
		head = head->next;
	}
	return (head);
}

