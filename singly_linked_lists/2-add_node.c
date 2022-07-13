

#include "lists.h"

/**
 * list_len - function that prints lenght of a singly linked list
 * @h: node pointer
 * Return: 0.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;

	if (str == NULL)
		return (NULL);

	node = malloc(sizeof(list_t));
	if (node == NULL)
	{
		free(node);
		return (NULL);
	}


	node->str = strdup(str);
	if (node->str == NULL)
	{
		free(node);
		return (NULL);
	}
		
	node->len = strlen(node->str);
	node->next = *head;
		*head = node;
	return (node);
}
