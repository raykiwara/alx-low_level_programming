#include "lists.h"
#include <stdio.h>
/**
 * listint_len - returns the no. of elements in a string
 * @h: head of node
 * Return: no. of elements
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
