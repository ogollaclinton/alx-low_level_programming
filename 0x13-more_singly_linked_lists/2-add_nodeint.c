#include "lists.h"
/**
 *add_nodeint - adds new node to beginning of list
 *@head: pointer to head
 *@n: value of new node
 *Return: address of new element
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nw = malloc(sizeof(listint_t));

	if (nw == NULL)
		return (NULL);
	nw->n = n;
	nw->next = *head;
	*head = nw;

	return (nw);
}
