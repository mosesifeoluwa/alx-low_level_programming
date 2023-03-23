#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first int
 * @b: second int
 * @c: third int
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int L;

	if (a > b && a > c)
	{
		L = a;
	}
	else if (a > b && c > a)
	{
		L = c;
	}
	else if (b > c)
	{
		L = b;
	}
	else
	{
		L = c;
	}
	return (L);
}
