#include "main.h"

/**
 * _memset - fill a block of memory
 * @s: start address
 * @b: desired value
 * @n: num of bytes
 *
 * Return: changed array with a new value
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
