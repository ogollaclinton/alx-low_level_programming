#include "main.h"
#include <stdlib.h>

/*
 *create_array - Creates array of size size and assign char c
 *@size: size of an array
 *@c: char to initialise
 *Return: Null or pointer
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
