#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - reallocates memory block
 * @ptr: pointer
 * @old_size: size of allocated memory
 * @new_size: new size of new memory block
 *
 * Return: pointer to newly allocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *a;
	char *b;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	a = malloc(new_size);
	if (!a)
		return (NULL);

	b = ptr;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			a[i] = b[i];
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			a[i] = b[i];
	}
	free(ptr);

	return (a);
}
