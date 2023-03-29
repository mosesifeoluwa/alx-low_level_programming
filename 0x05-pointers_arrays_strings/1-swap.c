#include "main.h"

/**
 * swap_int - swaps the values of two int(s)
 * @a: int to swap
 * @b: int to swap
 */

void swap_int(int *a, int *b)
{
	int k;

	k = *a;
	*a = *b;
	*b = k;
}
