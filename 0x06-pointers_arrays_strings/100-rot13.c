#include "main.h"
#include <stdio.h>

/**
 * rot13 - encoder rot13
 * @s:npointer to string params
 *
 * Return: *s
 */

char *rot13(char *s)
{
	int i, j;
	char d[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char d1[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == d[j])
			{
				s[i] = d1[j];
				break;
			}
		}
	}
	return (s);
}
