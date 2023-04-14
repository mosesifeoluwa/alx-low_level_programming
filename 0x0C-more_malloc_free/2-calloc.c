#include "main.h"
#include <stdlib.h>

/**
 * *_memset - fills memory with constant byte
 * @s: memory area
 * @b: char to copy
 * @n: number of times to copy b
 *
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

/**
 * *_calloc - allocate memory for an array
 * @nmemb: num of elements in array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;

	if (nmemb == 0 || size == 0)
		return (NULL);

	a = malloc(size * nmemb);

	if (a == NULL)
		return (NULL);

	_memset(a, 0, nmemb * size);

	return (a);
}
