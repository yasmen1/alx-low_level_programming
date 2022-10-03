#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings.
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to new space in memory, or NULL.
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k, e, coun;
	int coun1 = 0;
	int coun2 = 0;
	char *q;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
	{
		coun1 = coun1 + 1;
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		coun2++;
	}
	coun = coun1 + coun2;
	arr = malloc(sizeof(char) * coun++);
	if (q == NULL)
		return (NULL);
	for (k = k, e = 0; s2[e] != '\0'; e++, k++)
	{
		q[k] = s2[e];
	}
	q[k] = '\0';
	return (q);
