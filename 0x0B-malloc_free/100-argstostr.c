#include "main.h"
#include <stdlib.h>

/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	int i, a, b = 0, c = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (a = 0; av[i][a]; a++)
			c++;
	}
	c += ac;

	s = malloc(sizeof(char) * c + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (a = 0; av[i][a]; a++)
		{
			s[b] = av[i][a];
			b++;
		}
		if (s[b] == '\0')
			s[b++] = '\n';
	}
	return (s);
}
