#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - Concatenates two strings
 * @s1: String 1
 * @s2: String 2
 * @n: number of bytes
 * Return: Null or Pointer
 */


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *hld;
	unsigned int l = n, i;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i]; i++)
	{
	l++;
	}

	hld = malloc(sizeof(char) * (l + 1));

	if (hld == NULL)
	{
	return (NULL);
	}

	l = 0;

	for (i = 0; s1[i]; i++)
	{
		hld[l++] = s1[i];
	}

	for (i = 0; s2[i] && i < n; i++)
	{
		hld[l++] = s2[i];
	}

	hld[l] = '\0';

	return (hld);
}
