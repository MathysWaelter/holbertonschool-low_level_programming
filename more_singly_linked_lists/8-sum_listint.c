#include "lists.h"

/**
 * sum_listint - sum of all data
 * @head: last
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int add;

	while (head != NULL)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
