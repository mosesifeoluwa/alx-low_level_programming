#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - return the square root of a number
 * @n: num to calculate
 *
 * Return: resulting square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recurses to find the sqrt of n
 * @n: num to calculate
 * @i: iterator
 *
 * Return: resulting squareroot
 */

int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
