#include "lists.h"
#include <string.h>
/**
 * add_node - Adds a new node at the beginning of a list
 * @head: double pointer to the list
 * @str: string to be added
 * Return: Null or address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	char *c;
	int t;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	c = strdup(str);
	if (c == NULL)
	{
		free(new);
		return (NULL);
	}

	for (t = 0; str[t];)
		t++;

	new->str = c;
	new->len = t;
	new->next = *head;

	*head = new;

	return (new);
}

