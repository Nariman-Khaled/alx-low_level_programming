#include "lists.h"
/**
 *print_list- prints all the elements of a list_t list.
 * @h: list header
 * Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		if (h->str)
			printf("[%d] %s \n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		count++;
		h = h->next;
	}

	return (count);
}
