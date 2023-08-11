#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - Allocate memory using malloc
 * @b: number of bytes allocated
 * Return: Pointer allocated to memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (!ptr)
		exit(98);
	return (ptr);
}

