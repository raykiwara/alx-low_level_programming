#include <stdio.h>
#include "lists.h"
/**
 * print_listint - prints all the elements of a list
 * @h: pointer to the list
 * Return: no. of nodes
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
