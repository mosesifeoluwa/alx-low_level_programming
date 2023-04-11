#include "main.h"
#include <stdlib.h>

/**
 * str_concat - get ends of input and add up
 * @s1: input 1 to concatenate
 * @s2: input 2 to concatenate
 * Return: concatenation of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *c;
	int i, x;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = x = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[x] != '\0')
		x++;
	c = malloc(sizeof(char) * (i + x + 1));

	if (c == NULL)
		return (NULL);
	i = x = 0;

	while (s1[i] != '\0')
	{
		c[i] = s1[i];
		i++;
	}

	while (s2[x] != '\0')
	{
		c[i] = s2[x];
		i++, x++;
	}
	c[i] = '\0';
	return (c);
}
