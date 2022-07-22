#include "lists.h"

/**
 * sum_dlistint - return sum of all the data
 * @head: last node
 * Return: sum
 */

int sum_dlistint(dlistint_t *head)
{
	int add = 0;

	while (head != NULL)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
