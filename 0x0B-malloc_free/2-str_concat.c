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
	char *a1;
	int i, o, p, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	o = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[o] != '\0')
		o++;
	a1 = (char *) malloc(sizeof(char) * (i + o + 1));
	if (a1 == NULL)
		return (NULL);
	for (p = 0; s1[p]; p++)
		a1[p] = s1[p];
	for (j = 0; s2[j]; j++)
		a1[p + j] = s2[j];
	a1[p + j] = '\0';
	return (a1);
}
