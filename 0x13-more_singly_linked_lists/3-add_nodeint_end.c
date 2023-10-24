#include "lists.h"
/**
 *add_nodeint_end- adds a new node at the end of a listint_t list.
 * @head: list header
 * @n: int to add
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));
	listint_t *temp;

	if (node == NULL)
	{
		return (NULL);
	}

	node->n = n;
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
