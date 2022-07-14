
#include "lists.h"

/**
 * *add_node_end - function to add node of a singly linked list
 * @head: node pointer
 * @str: string
 * Return: 0.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *endnode;

	if (str == NULL)
		return (NULL);

	endnode = malloc(sizeof(list_t));
	if (endnode == NULL)
	{
		free(endnode);
		return (NULL);
	}


	endnode->str = strdup(str);
	if (endnode->str == NULL)
	{
		free(endnode);
		return (NULL);
	}

	endnode->next = NULL;
	endnode->len = strlen(endnode->str);
	
	if (*head == NULL)
	{
		*head = endnode;
		return (endnode);
	}

	while ((*head)->next != NULL)
	{
	*head = (*head)->next;
	}

	(*head)->next = endnode;	
	
	return (endnode);
}
