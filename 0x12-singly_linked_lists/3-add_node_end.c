#include "lists.h"

/**
 * add_node_end-  adds a new node at the end of a list_t list.
 * @head: list header
 * @str: data in node
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(list_t));
	size_t count;
	list_t *temp;

	if (node == NULL)
	{
		return (NULL);
	}

	for (count = 0; str[count]; count++)
		;
	node->str = strdup(str);
	node->len = count;
	node->next = NULL;


	if (*head == NULL)
	{
		*head = node;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}

		temp->next = node;
	}

	return (node);
}
