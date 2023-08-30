#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes node at index
 * @index: index of node to be deleted
 * @head: pointer to head of list
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tempo, *prev_node;
	unsigned int x = 0;

	if (!head || !*head)
		return (-1);

	if (!index)
	{
		tempo = *head;
		*head = (*head)->next;
		free(tempo);
		return (1);
	}
	tempo = *head;
	while (tempo)
	{
		if (x == index)
		{
			prev_node->next = tempo->next;
			free(tempo);
			return (1);
		}
		x++;
		prev_node = tempo;
		tempo = tempo->next;
	}
	return (-1);
}

