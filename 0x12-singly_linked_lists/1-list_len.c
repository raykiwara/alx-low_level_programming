#include "lists.h"
/**
 * list_len - returns no. of elements in a linked list
 * @h: pointer to the list
 * Return: no. of elements
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
