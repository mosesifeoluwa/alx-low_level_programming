#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: strings
 * Return: length
 */

int _strlen(char *s)
{
	int a = 0;

	while (*s != '\0')
	{
		a++;
		s++;
	}
	return (a);
}
