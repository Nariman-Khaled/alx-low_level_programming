#include "lists.h"
/**
 *add_nodeint- adds a new node at the beginning of a listint_t list.
 * @head: list header
 * @n: int to add
 * Return: the address of the new element, or NULL if it failed
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));

	if (node == NULL)
	{
		return (NULL);
	}

	node->n = n;
	if (*head == NULL)
	{
		*head = node;
	}
	else
	{
		node->next = *head;
		*head = node;
	}
	return (node);
}
