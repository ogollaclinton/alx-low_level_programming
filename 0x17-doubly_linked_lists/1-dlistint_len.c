#include "lists.h"
/*
 *dlistint_len - counts the number of elements in a list
 *@h - head of the dlistint_t list
 *
 *return - number of elements in the list
 *
 */
size_t dlistint_len(const dlistint_t *h);
{
	size_t nodes = 0;

	while (h != NULL)
		nodes++;
		h = h->next;
	return (nodes);



}
