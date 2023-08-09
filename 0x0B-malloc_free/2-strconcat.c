#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int int1, cint;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	int1 = cint = 0;
	while (s1[int1] != '\0')
		int1++;
	while (s2[cint] != '\0')
		cint++;
	conct = malloc(sizeof(char) * (int1 + cint + 1));

	if (conct == NULL)
		return (NULL);
	int1 = cint = 0;
	while (s1[int1] != '\0')
	{
		conct[int1] = s1[int1];
		int1++;
	}

	while (s2[cint] != '\0')
	{
		conct[int1] = s2[cint];
		int1++, cint++;
	}
	conct[int1] = '\0';
	return (conct);
}

