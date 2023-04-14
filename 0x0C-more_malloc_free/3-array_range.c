#include "main.h"
#include <stdlib.h>

/**
 * *array_range - create array of integers
 * @min: minimum range of values
 * @max: maximum range of values
 *
 * Return: pointer to the new array
 */

int *array_range(int min, int max)
{
	int *a;
	int i, x;

	if (min > max)
		return (NULL);

	x = max - min + 1;

	a = malloc(sizeof(int) * x);

	if (a == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		a[i] = min++;
	return (a);
}
