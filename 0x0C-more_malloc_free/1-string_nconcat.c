#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - concatenates n bytes of string to another
 * @s1: string to append
 * @s2: string to concatenate
 * @n: number of bytes
 *
 * Return: pointer ro resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int i = 0, j = 0, x = 0, y = 0;

	while (s1 && s1[x])
		x++;
	while (s2 && s2[y])
		y++;

	if (n < y)
		a = malloc(sizeof(char) * (x + n + 1));
	else
		a = malloc(sizeof(char) * (x + y + 1));

	if (!a)
		return (NULL);

	while (i < x)
	{
		a[i] = s1[i];
		i++;
	}

	while (n < y && i < (x + n))
		a[i++] = s2[j++];

	while (n >= y && i < (x + y))
		a[i++] = s2[j++];

	a[i] = '\0';
	return (a);
}
