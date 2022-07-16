#include "lists.h"

/**
 * *get_nodeint_at_index - function that return nth node
 * @head: first
 * @index: nth node
 * Return: head
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int temp;

	for (temp = 0 ; temp < index; temp++)
	{
		if (head == NULL)
		{
			return (0);
		}
		head = head->next;
	}
	return (head);
}
