#include "lists.h"

/**
 * add_node-  adds a new node at the beginning of a list_t list.
 * @head: list header
 * @str: data in node
 * Return: the address of the new element, or NULL if it failed
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(list_t));
	size_t count;

	if (node == NULL)
	{
		return (NULL);
	}

	node->str = strdup(str);

	for (count = 0; str[count]; count++)
	;

	node->len = count;
	node->next = *head;
	*head = node;

	return (*head);
}
