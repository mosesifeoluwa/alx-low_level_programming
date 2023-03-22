#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: The int to check
 * Return: the absolute value of int
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = -(n);
	}
	else if (n >= 0)
	{
		n = n;
	}
	return (n);
}
