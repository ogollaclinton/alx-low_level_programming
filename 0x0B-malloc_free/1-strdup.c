#include "main.h"
#include <stdlib.h>

/*
 *_strdup - Returns pointer to newly allocated space
 *contains coppy of string given as parameter
 *@str: string to be copied
 *Return: NULL or pointer
 */

char *_strdup(char *str)
{
	int len	= 0;
	char *r;

	if (str == NULL)
	{
		return (NULL);
	}
	while (*str++)
	{
		len++;
	}
	r = malloc(sizeof(char) * (len + 1));
	if (r == NULL)
	{
		return (NULL);
	}
	for (len++; len--;)
	{
		r[len] = *--str;
	}
	return (r);`
}
