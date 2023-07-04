#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes the head node of a listint_t
 * @head: head node
 * Return: head nodes data
 */
int pop_listint(listint_t **head)
{
	listint_t *s;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	s = *head;
	*head = s->next;
	n = s->n;
	free(s);
	return (n);
}
