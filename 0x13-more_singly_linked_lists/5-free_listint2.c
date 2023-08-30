#include "lists.h"
/**
 * free_listint2 - Frees list
 * @head: pointer to head of list being freed
*/

void free_listint2(listint_t **head)
{
	listint_t *tempo;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		tempo = *head;
		*head = (*head)->next;
		free(tempo);
	}
}
