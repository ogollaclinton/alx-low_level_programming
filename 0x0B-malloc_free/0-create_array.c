#include "main.h"
#include <stdlib.h>

/*
 * create_array - Creates array of size size and assign char c
 * @size: size of array
 * @c: char to assign
 * Return: Nullif fail or pointer to an array
 *
 */

char *create_array(unsigned int size, char c)
{
	char *b;
	unsigned int i;

	b = malloc(sizeof(char) * size);

	if (!size || b == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		b[i] = c;
	}
	return (b);

}
