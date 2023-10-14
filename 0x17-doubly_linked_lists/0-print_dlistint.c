#include "lists.h"
/*
 *print_dlistint - prints all the elements of a dlistint list
 *@h - head of the dlistint list
 *
 *Return - the number of nodes in the list
 *
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	return (nodes);
}
