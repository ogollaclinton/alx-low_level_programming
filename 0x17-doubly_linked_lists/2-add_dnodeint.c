#include "lists.h"
/*
 *add_dnodeint - adds a new node at the beginning of a list
 *@head - apointer to the head of a lista
 *
 *
 *returns - NULL if fails, otherwise the address of the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = *head;
	if (*head != NULL)
		(*head)->prev = newnode;
	*head = newnode;
	return (newnode);
}

