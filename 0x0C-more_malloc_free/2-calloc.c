#include "main.h"
#include <stdlib.h>
/**
 * _calloc - Allocate memory for an array
 * @nmemb: number of elements
 * @size: byte size
 * Return: Null or Pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *hld;
	char *g;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	hld = malloc(size * nmemb);

	if (hld == NULL)
		return (NULL);

	g = hld;

	for (i = 0; i < (size * nmemb); i++)
		g[i] = '\0';

	return (hld);
}

