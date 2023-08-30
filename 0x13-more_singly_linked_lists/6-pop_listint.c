#include "lists.h"
/**
 * pop_listint - Delete head node of list
 * @head: pointer to head of list
 * Return: 0 or head node's data(n)
 */
int pop_listint(listint_t **head)
{
	int v = 0;
	listint_t *tempo = *head;

	if (head == NULL || *head == NULL)
		return (v);
	v = temp->n;
	*head = (*head)->next;
	free(tempo);
	return (v);
}

