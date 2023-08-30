#include "lists.h"
/**
 * free_listint_safe - prints a list
 * @h: address of pointer to first node
 * Return: address of head
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tempo = *h, *node;
	unsigned int count = 0;

	if (tempo == 0 || h == 0)
		return (0);

	tempo = *h;
	while (tempo != 0)
	{
		node = tempo;
		tempo = tempo->next;
		count++;

		free(node);

		if (node <= tempo)
			break;
	}

	*h = 0;
	return (count);
}
