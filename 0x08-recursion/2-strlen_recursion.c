#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string
 * @s: String to be measured
 *
 * Return: Length of the string
 */

int _strlen_recursion(char *s)
{
	int a = 0;

	if (*s)
	{
		a++;
		a += _strlen_recursion(s + 1);
	}
	return (a);
}
