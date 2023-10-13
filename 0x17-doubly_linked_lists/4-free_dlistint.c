nclude "lists.h"
/**
 * free_dlistint - Free a dlistint_t list
 * @head: pointer to head of list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);

	}
}
