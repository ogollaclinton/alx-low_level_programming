#include "lists.h"
#include <stdio.h>
/**
 * print_listint_safe - prints a list
 * @head: pointer to head of a list
 * Return: address of head
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tempo, *current;
	unsigned int count = 0;

	tempo = head;
	if (tempo == 0)
	return (0);

	while (tempo != 0)
	{
		current = tempo;
		tempo = tempo->next;

		count++;

		printf("[%p] %d\n", (void *)current, current->n);

		if (current <= tempo)
		{
			printf("-> [%p] %d\n", (void *)tempo, tempo->n);
			break;
		}
	}
	return (count);
}
