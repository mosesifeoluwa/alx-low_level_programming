#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - duplicate to new memory location
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
	char *a;
	int i, x = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	a = malloc(sizeof(char) * (i + 1));

	if (a == NULL)
		return (NULL);

	for (x = 0; str[x]; x++)
		a[x] = str[x];

	return (a);
}
