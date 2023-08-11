#include "main.h"
#include <stdlib.h>
/**
 * array_range - Create an array of integers
 * @min: minimum value in array
 * @max: maximum value in array
 * Return: Pointer to new array
 */

int *array_range(int min, int max)
{
	int *h, m;

	if (min > max)
		return (NULL);
	m = max - min + 1;
	h = malloc(sizeof(*h) * m);
	if (h == NULL)
		return (NULL);
	while (m--)
		h[m] = max--;
	return (h);
}

