#include "lists.h"
/**
 *free_listint-  frees a listint_t list.
 * @head: list header
*/
void free_listint(listint_t *head)
{
	listint_t *temp = head;

	while (head != NULL)
	{
		head = head->next;
		free(temp);
		temp = head;
	}
}
